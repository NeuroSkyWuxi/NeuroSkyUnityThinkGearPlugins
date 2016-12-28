using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;

public class UnityThinkGear{

#if UNITY_IPHONE
	[DllImport ("__Internal")]
	private static extern void TGAM_Init(bool rawEnabled);
	
	[DllImport ("__Internal")]
	private static extern void TGAM_Close();

	[DllImport ("__Internal")]
	private static extern void TGAM_StartStream();

	[DllImport ("__Internal")]
	private static extern void TGAM_StopStream();

	//Tommy add 20161020
	[DllImport ("__Internal")]
	private static extern void TGAM_ScanDevice();

	[DllImport ("__Internal")]
	private static extern void TGAM_ConnectDevice(string deviceId);
	//Tommy end
	
	[DllImport ("__Internal")]
	private static extern bool TGAM_GetSendRawEnable();

	[DllImport ("__Internal")]
	private static extern bool TGAM_GetSendEEGEnable();
	
	[DllImport ("__Internal")]
	private static extern bool TGAM_GetSendESenseEnable ();
		
	[DllImport ("__Internal")]
	private static extern bool TGAM_GetSendBlinkEnable();

	[DllImport ("__Internal")]
	private static extern void TGAM_SetSendRawEnable(bool enabled);
	
	[DllImport ("__Internal")]
	private static extern void TGAM_SetSendEEGEnable(bool enabled);

	[DllImport ("__Internal")]
	private static extern void TGAM_SetSendESenseEnable(bool enabled);
	
	[DllImport ("__Internal")]
	private static extern void TGAM_SetSendBlinkEnable(bool enabled);
#elif UNITY_ANDROID
	/*
    
    Following are connection status that declared in UnityThinkGear2User.Jar
    when you getConnectStatex(),the return value will be one of following string
    	* 
	public static final String STATE_IDLE = "idle";
	public static final String STATE_CONNECTING = "connecting";
	public static final String STATE_CONNECTED = "connected";
	public static final String STATE_NOT_FOUND = "not found";
	public static final String STATE_NOT_PAIRED = "not paired";
	public static final String STATE_DISCONNECTED = "disconnected";
	public static final String LOW_BATTERY = "low battery";
	public static final String BLUETOOTH_ERROR = "bluetooth error";

	public String connectState1 = STATE_IDLE;
	public String connectState2 = STATE_IDLE;
     */
	private static AndroidJavaClass jc;
	private static AndroidJavaObject jo;
#endif



	public static void Init(bool rawEnabled){
#if UNITY_IPHONE
		TGAM_Init(rawEnabled);
#elif UNITY_ANDROID
		jc = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		jo = jc.GetStatic<AndroidJavaObject>("currentActivity");
		jo.Set<bool>("sendRawEnable", rawEnabled);
#endif
	}
	public static void Close(){
#if UNITY_IPHONE
		TGAM_Close();
#elif UNITY_ANDROID
		jo.Call("disconnect");
#endif
	}
	public static void StartStream(){
#if UNITY_IPHONE
		TGAM_StartStream();
#elif UNITY_ANDROID
		jo.Call("connectWithRaw");
#endif
	}

	public static void StopStream(){
#if UNITY_IPHONE
		TGAM_StopStream();
#elif UNITY_ANDROID
		jo.Call("disconnect");
#endif
	}

#if UNITY_IPHONE
	//Tommy add 20161020
	public static void ScanDevice(){
		TGAM_ScanDevice();

	}

	public static void ConnectDevice(string deviceId){
		TGAM_ConnectDevice(deviceId);

	}
#endif
	//Tommy end
	//========================
	public static bool GetSendRawEnable(){
#if UNITY_IPHONE
		return TGAM_GetSendRawEnable();
#elif UNITY_ANDROID
		return jo.Get<bool>("sendRawEnable");
#else 
		return false;
#endif
	}
	public static bool GetSendEEGEnable(){
#if UNITY_IPHONE
		return TGAM_GetSendEEGEnable();
#elif UNITY_ANDROID
		return jo.Get<bool>("sendEEGEnable");
#else 
		return false;
#endif
	}
	public static bool GetSendESenseEnable(){
#if UNITY_IPHONE
		return TGAM_GetSendESenseEnable();
#elif UNITY_ANDROID
		return jo.Get<bool>("sendESenseEnable");
#else 
		return false;
#endif
	}
	public static bool GetSendBlinkEnable(){
#if UNITY_IPHONE
		return TGAM_GetSendBlinkEnable();
#elif UNITY_ANDROID
		return jo.Get<bool>("sendBlinkEnable");
#else 
		return false;
#endif
	}
	
	//========================
	public static void SetSendRawEnable(bool enabled){
#if UNITY_IPHONE
		TGAM_SetSendRawEnable(enabled);
#elif UNITY_ANDROID
		jo.Set<bool>("sendRawEnable", enabled);

#endif
	}
	public static void SetSendEEGEnable(bool enabled){
#if UNITY_IPHONE
		TGAM_SetSendEEGEnable(enabled);
#elif UNITY_ANDROID
		jo.Set<bool>("sendEEGEnable", enabled);
#endif
	}
	public static void SetSendESenseEnable(bool enabled){
#if UNITY_IPHONE
		TGAM_SetSendESenseEnable(enabled);
#elif UNITY_ANDROID
		jo.Set<bool>("sendESenseEnable", enabled);
#endif
	}
	public static void SetSendBlinkEnable(bool enabled){
#if UNITY_IPHONE
		TGAM_SetSendBlinkEnable(enabled);
#elif UNITY_ANDROID
		jo.Set<bool>("sendBlinkEnable", enabled);
#endif
	}
	
}
