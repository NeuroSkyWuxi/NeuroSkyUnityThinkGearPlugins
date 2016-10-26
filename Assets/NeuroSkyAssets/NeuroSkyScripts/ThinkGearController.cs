using UnityEngine;
using System.Collections;

public class ThinkGearController : MonoBehaviour {
	
	public delegate void UpdateIntValueDelegate(int value);
	public delegate void UpdateFloatValueDelegate(float value);
	public delegate void UpdateStringValueDelegate(string value);

	public event UpdateStringValueDelegate UpdateConnectStateEvent;
	
	public event UpdateIntValueDelegate UpdatePoorSignalEvent;
	public event UpdateIntValueDelegate UpdateAttentionEvent;
	public event UpdateIntValueDelegate UpdateMeditationEvent;
	public event UpdateIntValueDelegate UpdateRawdataEvent;
	public event UpdateIntValueDelegate UpdateBlinkEvent;
	
	public event UpdateFloatValueDelegate UpdateDeltaEvent;
	public event UpdateFloatValueDelegate UpdateThetaEvent;
	public event UpdateFloatValueDelegate UpdateLowAlphaEvent;
	public event UpdateFloatValueDelegate UpdateHighAlphaEvent;
	public event UpdateFloatValueDelegate UpdateLowBetaEvent;
	public event UpdateFloatValueDelegate UpdateHighBetaEvent;
	public event UpdateFloatValueDelegate UpdateLowGammaEvent;
	public event UpdateFloatValueDelegate UpdateHighGammaEvent;

	public event UpdateStringValueDelegate UpdateDeviceInfoEvent;
	
	private bool sendRawEnable = false;
	private bool sendEEGEnable = false;
	private bool sendESenseEnable = true;
	private bool sendBlinkEnable = true;
	
	void Awake(){
		UnityThinkGear.Init(true);
		InvokeRepeating("CheckUpdateEvent",0.0f,1.0f);
	}
	// Use this for initialization
	void Start () {
	
		sendRawEnable = UnityThinkGear.GetSendRawEnable();
		sendEEGEnable = UnityThinkGear.GetSendEEGEnable();
		sendESenseEnable = UnityThinkGear.GetSendESenseEnable();
		sendBlinkEnable = UnityThinkGear.GetSendBlinkEnable();
	}
	
	void CheckUpdateEvent(){
		if(!sendRawEnable && (UpdateRawdataEvent != null)){
			sendRawEnable = true;
			UnityThinkGear.SetSendRawEnable(true);
		}
		if(sendRawEnable && UpdateRawdataEvent == null){
			sendRawEnable = false;
			UnityThinkGear.SetSendRawEnable(false);
		}
		
		if(!sendEEGEnable && 
		   (UpdateDeltaEvent != null || UpdateThetaEvent != null ||
		   UpdateLowAlphaEvent != null || UpdateLowBetaEvent != null || 
		   UpdateLowGammaEvent != null || UpdateHighAlphaEvent != null ||
		   UpdateHighBetaEvent != null || UpdateHighGammaEvent != null)){
			sendEEGEnable = true;
			UnityThinkGear.SetSendEEGEnable(true);
		}
		if(sendEEGEnable && 
		   UpdateDeltaEvent == null && UpdateThetaEvent == null && 
		   UpdateLowAlphaEvent == null && UpdateLowBetaEvent == null && 
		   UpdateLowGammaEvent == null && UpdateHighAlphaEvent == null && 
		   UpdateHighBetaEvent == null && UpdateHighGammaEvent == null){
			sendEEGEnable = false;
			UnityThinkGear.SetSendEEGEnable(false);
		}
		
		if(!sendESenseEnable &&
		   (UpdateAttentionEvent != null || UpdateMeditationEvent != null)){
			sendESenseEnable = true;
			UnityThinkGear.SetSendESenseEnable(true);
		}
		if(sendESenseEnable &&
		   UpdateAttentionEvent == null && UpdateMeditationEvent == null){
			sendESenseEnable = false;
			UnityThinkGear.SetSendESenseEnable(false);
		}
		
		if(!sendBlinkEnable && (UpdateBlinkEvent != null)){
			sendBlinkEnable = true;
			UnityThinkGear.SetSendBlinkEnable(true);
		}
		if(sendBlinkEnable && UpdateBlinkEvent == null){
			sendBlinkEnable = false;
			UnityThinkGear.SetSendBlinkEnable(false);
		}
	}
	
	// Update is called once per frame
	void Update () {
	
		
	}
	
	void receiveRawdata(string value){
		if(UpdateRawdataEvent != null){
			UpdateRawdataEvent(int.Parse(value));
		}
	}
	
	void receiveBlink(string value){
		if(UpdateBlinkEvent != null){
			UpdateBlinkEvent(int.Parse(value));
		}
	}
	
	
	void receivePoorSignal(string value){
		if(UpdatePoorSignalEvent != null){
			UpdatePoorSignalEvent(int.Parse(value));
		}
	}
	void receiveAttention(string value){
		if(UpdateAttentionEvent != null){
			UpdateAttentionEvent(int.Parse(value));
		}
	}
	void receiveMeditation(string value){
		if(UpdateMeditationEvent != null){
			UpdateMeditationEvent(int.Parse(value));
		}
	}
	void receiveDelta(string value){
		if(UpdateDeltaEvent != null){
			UpdateDeltaEvent(float.Parse(value));
		}
	}
	void receiveTheta(string value){
		if(UpdateThetaEvent != null){
			UpdateThetaEvent(float.Parse(value));
		}
	}
	void receiveLowAlpha(string value){
		if(UpdateLowAlphaEvent != null){
			UpdateLowAlphaEvent(float.Parse(value));
		}
	}
	void receiveHighAlpha(string value){
		if(UpdateHighAlphaEvent != null){
			UpdateHighAlphaEvent(float.Parse(value));
		}
	}
	void receiveLowBeta(string value){
		if(UpdateLowBetaEvent != null){
			UpdateLowBetaEvent(float.Parse(value));
		}
	}
	void receiveHighBeta(string value){
		if(UpdateHighBetaEvent != null){
			UpdateHighBetaEvent(float.Parse(value));
		}
	}
	void receiveLowGamma(string value){
		if(UpdateLowGammaEvent != null){
			UpdateLowGammaEvent(float.Parse(value));
		}
	}
	void receiveHighGamma(string value){
		if(UpdateHighGammaEvent != null){
			UpdateHighGammaEvent(float.Parse(value));
		}
	}
	//Tommy add 20161012
	void receiveDeviceInfo (string deviceInfo){

		print ("!!! Unity deviceInfo :"+deviceInfo);
		if (UpdateDeviceInfoEvent != null) {
			UpdateDeviceInfoEvent (deviceInfo);
		}

	}


	//====================

#if UNITY_ANDROID
	/*
	   receive "idle" : BT is null or connect status has not been updated
	   receive "connecting": Android device is connecting mindwave headset.
	   receive "connected" : Android device can read data from mindwave headset.
	   receive "not found" : paired mindwave headset is off or not in searchable area.
	   receive "not paired": there are not mindwave headset paired with Android device.
	   receive "disconnected":mindwave headset is off or out of searchable area of Android device.
	   receive "low battery" :mindwave headset's battery dose not have power.
	   receive "bluetooth error" : Android device is not support BT.
    */
	void receiveConnectState1(string value){
		if(UpdateConnectStateEvent != null){
			UpdateConnectStateEvent(value);
		}
	}
#endif	
	//====================


	void OnApplicationQuit(){
		UnityThinkGear.StopStream();
		UnityThinkGear.Close();
		
	}



}
