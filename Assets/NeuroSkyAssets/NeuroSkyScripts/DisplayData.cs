using UnityEngine;
using System.Collections;

public class DisplayData : MonoBehaviour {
	
	public Texture2D[] signalIcons;
	
	private float indexSignalIcons = 1;
	private bool enableAnimation = false;
	private float animationInterval = 0.06f;
	
    ThinkGearController controller;
	
	private int Raw = 0;
	private int PoorSignal = 200;
	private int Attention = 0;
	private int Meditation = 0;
	private int Blink = 0;
	private float Delta = 0.0f;
	private float Theta = 0.0f;
	private float LowAlpha = 0.0f;
	private float HighAlpha = 0.0f;
	private float LowBeta = 0.0f;
	private float HighBeta = 0.0f;
	private float LowGamma = 0.0f;
	private float HighGamma = 0.0f;


	//Tommy add 20161020
	private bool showListViewFlag = false;
	private ArrayList deviceList;
	private ArrayList displayedStrArr;
	Vector2 scrollPosition ;
	Rect windowRect ;

	float rectX = 0;
	float rectY = 0;
	float rectWidth = 0;
	float rectHeight = 0;

	// Use this for initialization
	void Start () {
		controller = GameObject.Find("ThinkGear").GetComponent<ThinkGearController>();

		controller.UpdateRawdataEvent += OnUpdateRaw;
		controller.UpdatePoorSignalEvent += OnUpdatePoorSignal;
		controller.UpdateAttentionEvent += OnUpdateAttention;
		controller.UpdateMeditationEvent += OnUpdateMeditation;
		
		controller.UpdateDeltaEvent += OnUpdateDelta;
		controller.UpdateThetaEvent += OnUpdateTheta;

		controller.UpdateHighAlphaEvent += OnUpdateHighAlpha;
		controller.UpdateHighBetaEvent += OnUpdateHighBeta;
		controller.UpdateHighGammaEvent += OnUpdateHighGamma;

		controller.UpdateLowAlphaEvent += OnUpdateLowAlpha;
		controller.UpdateLowBetaEvent += OnUpdateLowBeta;
		controller.UpdateLowGammaEvent += OnUpdateLowGamma;

		controller.UpdateBlinkEvent += OnUpdateBlink;

		controller.UpdateDeviceInfoEvent += OnUpdateDeviceInfo;


		deviceList = new ArrayList();
		displayedStrArr = new ArrayList();
		rectX = Screen.width / 10;
		rectY = Screen.height / 3;
		rectWidth = Screen.width * 8 / 10;
		rectHeight = Screen.height / 4;
			
		
	}
	
	void OnUpdatePoorSignal(int value){
		PoorSignal = value;
		if(value == 0){
      		indexSignalIcons = 0;
			enableAnimation = false;
		}else if(value == 200){
      		indexSignalIcons = 1;
			enableAnimation = false;
		}else if(!enableAnimation){
			indexSignalIcons = 2;
			enableAnimation = true;
		}
	}
	void OnUpdateRaw(int value){
		Raw = value;
	}
	void OnUpdateAttention(int value){
		Attention = value;
	}
	void OnUpdateMeditation(int value){
		Meditation = value;

	}
	void OnUpdateDelta(float value){
		Delta = value;
	}
	void OnUpdateTheta(float value){
		Theta = value;
	}
	void OnUpdateHighAlpha(float value){
		HighAlpha = value;
	}
	void OnUpdateHighBeta(float value){
		HighBeta = value;
	}
	void OnUpdateHighGamma(float value){
		HighGamma = value;
	}
	void OnUpdateLowAlpha(float value){
		LowAlpha = value;
	}
	void OnUpdateLowBeta(float value){
		LowBeta = value;
	}
	void OnUpdateLowGamma(float value){
		LowGamma = value;
	}

	void OnUpdateBlink(int value){
		Blink = value;
	}


	void OnUpdateDeviceInfo(string deviceInfo){
		//deviceFound deviceInfo = NSF4F1BF;MindWave Mobile;BAFCEB11-2DB6-70B3-B038-B4AD2EFC6309
		// FMGID ; name ; ConnectId
		print ("Unity  Test DeviceInfo = "+deviceInfo);
		Add2DeviceListArray(deviceInfo);
	}
	
	// Update is called once per frame
	void Update () {
	
		#if UNITY_IPHONE
		//当触摸到了列表以外的地方  消失列表
		// 不与Connect按钮位置 重复
		if (Input.touchCount > 0) {
//			print ("Screen.width : "+Screen.width+ "Screen.height : " +Screen.height);
//			print ("Touch Position x : "+Input.GetTouch(0).position.x + " y : "+Input.GetTouch(0).position.y);
			if (
				Input.GetTouch (0).position.x >= rectX && Input.GetTouch (0).position.x <= (rectX + rectWidth)
				&& Input.GetTouch (0).position.y >= (Screen.height - rectY- rectHeight) && Input.GetTouch (0).position.y <= (Screen.height - rectY )) {

			} else if (Input.GetTouch (0).position.x <= 290 && Input.GetTouch (0).position.x >= 190 &&
			          Input.GetTouch (0).position.y >= (Screen.height - 140 - 80) && Input.GetTouch (0).position.y <= (Screen.height - 140)) {
				
//				print(" Click Connect Button Frame");
			} else {
				print("blank place Click ; dismiss list view");

				dismissListView();
			}

		}

		#endif
	}
	
	/**
	 *when Fixed Timestep == 0.02 
	 **/
	void FixedUpdate(){
		if(enableAnimation){
			if(indexSignalIcons >= 4.8){
				indexSignalIcons = 2;
			}
			indexSignalIcons += animationInterval;
		}
		
	}
	
	void OnGUI(){
		GUILayout.BeginHorizontal();
		GUILayout.Label("Demo App");
		GUILayout.Space(Screen.width-250);
		GUILayout.Label(signalIcons[(int)indexSignalIcons]);
		GUILayout.EndHorizontal();
		
		if(GUI.Button( new Rect(190,20,100,80),"Init")){
			UnityThinkGear.Init(true);
		}
		
		if(GUI.Button(new Rect(190,140,100,80),"Connect")){
			print("Connect Button CLick");
			#if UNITY_IPHONE

			clearDataArr();
			UnityThinkGear.ScanDevice();
			showListViewFlag = true;

			#elif UNITY_ANDROID
			UnityThinkGear.StartStream();

			#endif

		}
		
		if(GUI.Button(new Rect(190,250,100,80),"Quit")){
			Application.Quit();
		}

		if(showListViewFlag){

			//andrew code;  show device list view;
			GUILayout.BeginArea (new Rect (rectX,rectY,rectWidth,rectHeight));
			windowRect = GUILayout.Window (0, new Rect (rectX,rectY,rectWidth,rectHeight), DeviceListWindow, "Device List");
			GUILayout.EndArea ();

		}

		
		GUILayout.BeginVertical();
		GUILayout.Label("Raw:" + Raw);
		GUILayout.Label("PoorSignal:" + PoorSignal);
		GUILayout.Label("Attention:" + Attention);
		GUILayout.Label("Meditation:" + Meditation);
		GUILayout.Label("Blink:" + Blink);
		GUILayout.Label("Delta:" + Delta);
		GUILayout.Label("Theta:" + Theta);
		GUILayout.Label("LowAlpha:" + LowAlpha);
		GUILayout.Label("HighAlpha:" + HighAlpha);
		GUILayout.Label("LowBeta:" + LowBeta);
		GUILayout.Label("HighBeta:" + HighBeta);
		GUILayout.Label("LowGamma:" + LowGamma);
		GUILayout.Label("HighGamma:" + HighGamma);
		
		GUILayout.EndVertical();
	}	

	void DeviceListWindow (int windowID) {
		var buttonStyle= new GUIStyle("Button");
		buttonStyle.fontSize = 40;

	
		scrollPosition = GUILayout.BeginScrollView (scrollPosition, GUILayout.Width (rectWidth) , GUILayout.Height (rectHeight));
		for(int i = 0; i < deviceList.Count; i++) {
			if(GUILayout.Button (displayedStrArr[i]+"", buttonStyle)) {
				print("Click "+deviceList[i]);
				#if UNITY_IPHONE
				UnityThinkGear.ConnectDevice(deviceList[i]+"");
				#endif
				dismissListView();
			}
		}

		// End the scrollview we began above.
		GUILayout.EndScrollView ();
	}

	void dismissListView(){

		showListViewFlag = false;
		clearDataArr();
	}

	void clearDataArr(){

		deviceList.Clear();
		displayedStrArr.Clear();
	}

	//添加到数组，不添加重复的对象
	void Add2DeviceListArray(string element){
		string mfgid = "";
		string name = "";
		string deviceId = "";

		mfgid = element.Split(";"[0])[0];
		name = element.Split(";"[0])[1];
		deviceId = element.Split(";"[0])[2];
		print("Add2DeviceListArray  mfgid : "+mfgid + " name: "+name+" deviceId: "+deviceId);

		int  deviceCount = 0;
		deviceCount = deviceList.Count;
		print("deviceCount : "+deviceCount);
		if(deviceCount > 0){
            for(int i = 0; i < deviceList.Count; i++) {
				if(deviceList[i] == deviceId){
					break;
				}
				else{
					displayedStrArr.Add(mfgid+" "+name);
					deviceList.Add(deviceId);
					break;
				}

			}

		}
		else{
			displayedStrArr.Add(mfgid+" "+name);
			deviceList.Add(deviceId);
		}


		print("deviceList : "+deviceList);
		print("displayedStrArr : "+displayedStrArr);


	}


}
