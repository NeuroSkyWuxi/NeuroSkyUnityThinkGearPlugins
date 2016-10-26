package com.neurosky.mindgame;

import android.bluetooth.BluetoothAdapter;
import android.content.res.Configuration;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.view.KeyEvent;

import com.neurosky.thinkgear.TGDevice;
import com.neurosky.thinkgear.TGEegPower;
import com.unity3d.player.UnityPlayer;
import com.unity3d.player.UnityPlayerActivity;

public class UnityThinkGear2User extends UnityPlayerActivity {
	public static final String STATE_IDLE = "idle";
	public static final String STATE_CONNECTING = "connecting";
	public static final String STATE_CONNECTED = "connected";
	public static final String STATE_NOT_FOUND = "not found";
	public static final String STATE_NOT_PAIRED = "not paired";
	public static final String STATE_DISCONNECTED = "disconnected";
	public static final String LOW_BATTERY = "low battery";
	public static final String BLUETOOTH_ERROR = "bluetooth error";
	
	public boolean sendRawEnable = true,sendEEGEnable = true,sendESenseEnable = true,sendBlinkEnable = true;

	public String connectState = STATE_IDLE;
	public String connectState2 = STATE_IDLE;
	public int meditation = 0, meditation2 = 0;
	public int attention = 0, attention2 = 0;
	public int poorSignalValue = 200, poorSignalValue2 = 200;
	public float delta = 0, delta2 = 0;
	public float theta = 0, theta2 = 0;
	public float lowAlpha = 0, lowAlpha2 = 0;
	public float highAlpha = 0, highAlpha2 = 0;
	public float lowBeta = 0, lowBeta2 = 0;
	public float highBeta = 0, highBeta2 = 0;
	public float lowGamma = 0, lowGamma2 = 0;
	public float highGamma = 0, highGamma2 = 0;
	public int raw = 0, raw2 = 0;
	public int blink = 0, blink2 = 0;
	public int heartRate = 0, heartRate2 = 0;
	public int rawCount = 0, rawCount2 = 0;

	public int pressedKeyCode = -1;

	private BluetoothAdapter bluetoothAdapter;
	private TGDevice tgDevice;
	private TGDevice tgDevice2;

	@Override
	public void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		bluetoothAdapter = BluetoothAdapter.getDefaultAdapter();
		if (bluetoothAdapter == null) {
			connectState = BLUETOOTH_ERROR;
			connectState2 = BLUETOOTH_ERROR;
			return;
		} else {
			tgDevice = new TGDevice(bluetoothAdapter, handler);
			tgDevice2 = new TGDevice(bluetoothAdapter, handler2);
		}
	}

	@Override
	 public void onConfigurationChanged(Configuration newConfig) {
	  // TODO Auto-generated method stub
	  System.out.println("onConfigurationChanged-----");
	  super.onConfigurationChanged(newConfig);
	  if (newConfig.orientation == Configuration.ORIENTATION_LANDSCAPE) {
		  //Log.i("MindGame", "Landscape");;
	  } else {
		  //Log.i("MindGame", "Portrait");
	  }
	 }
	
	@Override
	public boolean onKeyDown(int keyCode, KeyEvent event) {
		pressedKeyCode = keyCode;
		UnityPlayer.UnitySendMessage("ThinkGear", "receiveRemoteKeyCode", ""
				+ keyCode);
		return super.onKeyDown(keyCode, event);
	}

	private final Handler handler = new Handler() {
		@Override
		public void handleMessage(Message msg) {
			switch (msg.what) {
			case TGDevice.MSG_STATE_CHANGE:
				switch (msg.arg1) {
				case TGDevice.STATE_IDLE:
					break;
				case TGDevice.STATE_CONNECTING:
					connectState = STATE_CONNECTING;
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveConnectState", connectState);
					break;
				case TGDevice.STATE_CONNECTED:
					connectState = STATE_CONNECTED;
					tgDevice.start();
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveConnectState", connectState);
					break;
				case TGDevice.STATE_NOT_FOUND:
					connectState = STATE_NOT_FOUND;
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveConnectState", connectState);
					break;

				case TGDevice.STATE_DISCONNECTED:
					connectState = STATE_DISCONNECTED;
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveConnectState", connectState);
				}
				break;

			case TGDevice.MSG_POOR_SIGNAL:
				poorSignalValue = msg.arg1;
				UnityPlayer.UnitySendMessage("ThinkGear",
						"receivePoorSignal", ""+poorSignalValue);
				break;
			case TGDevice.MSG_RAW_DATA:
				raw = msg.arg1;
				if(sendRawEnable){
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveRawdata", ""+raw);
				}
				break;
			case TGDevice.MSG_HEART_RATE:
				heartRate = (msg.arg1);
				break;

			case TGDevice.MSG_ATTENTION:
				attention = (msg.arg1);
				if(sendESenseEnable){
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveAttention", ""+attention);
				}
				break;
			case TGDevice.MSG_MEDITATION:
				meditation = (msg.arg1);
				if(sendESenseEnable){
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveMeditation", ""+meditation);
				}
				break;
			case TGDevice.MSG_BLINK:
				blink = (msg.arg1);
				if(sendBlinkEnable){
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveBlink", ""+blink);
				}
				break;
			case TGDevice.MSG_RAW_COUNT:
				rawCount = (msg.arg1);
				break;
			case TGDevice.MSG_LOW_BATTERY:
				connectState = LOW_BATTERY;
				UnityPlayer.UnitySendMessage("ThinkGear",
						"receiveConnectState", connectState);
				break;
			case TGDevice.MSG_RAW_MULTI:
				break;
			case TGDevice.MSG_EEG_POWER:
				TGEegPower eeg = (TGEegPower) msg.obj;
				delta = Float.parseFloat(""+eeg.delta);
				theta = Float.parseFloat(""+eeg.theta);
				
				lowGamma = Float.parseFloat(""+eeg.lowGamma);
				lowBeta = Float.parseFloat(""+eeg.lowBeta);
				lowAlpha = Float.parseFloat(""+eeg.lowAlpha);

				highGamma = Float.parseFloat(""+eeg.midGamma);
				highBeta = Float.parseFloat(""+eeg.highBeta);
				highAlpha = Float.parseFloat(""+eeg.highAlpha);
				
				if(sendEEGEnable){
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveDelta", ""+delta);
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveTheta", ""+theta);
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveLowGamma", ""+lowGamma);
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveLowBeta", ""+lowBeta);
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveLowAlpha", ""+lowAlpha);
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveHighGamma", ""+highGamma);
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveHighBeta", ""+highBeta);
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveHighAlpha", ""+highAlpha);
				}
			default:
				break;
			}
		}
	};

	private final Handler handler2 = new Handler() {
		@Override
		public void handleMessage(Message msg) {
			switch (msg.what) {
			case TGDevice.MSG_STATE_CHANGE:
				switch (msg.arg1) {
				case TGDevice.STATE_IDLE:
					break;
				case TGDevice.STATE_CONNECTING:
					connectState2 = STATE_CONNECTING;
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveConnectState2", connectState2);
					break;
				case TGDevice.STATE_CONNECTED:
					connectState2 = STATE_CONNECTED;
					tgDevice2.start();
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveConnectState2", connectState2);
					break;
				case TGDevice.STATE_NOT_FOUND:
					connectState2 = STATE_NOT_FOUND;
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveConnectState2", connectState2);
					break;

				case TGDevice.STATE_DISCONNECTED:
					connectState2 = STATE_DISCONNECTED;
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveConnectState2", connectState2);
				}
				break;

			case TGDevice.MSG_POOR_SIGNAL:
				poorSignalValue2 = msg.arg1;
				UnityPlayer.UnitySendMessage("ThinkGear",
						"receivePoorSignal2", ""+poorSignalValue2);
				break;
			case TGDevice.MSG_RAW_DATA:
				raw2 = msg.arg1;
				if(sendRawEnable){
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveRaw2", ""+raw2);
				}
				break;
			case TGDevice.MSG_HEART_RATE:
				heartRate2 = (msg.arg1);
				break;
			case TGDevice.MSG_ATTENTION:
				attention2 = (msg.arg1);
				if(sendESenseEnable){
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveAttention2", ""+attention2);
				}
				break;
			case TGDevice.MSG_MEDITATION:
				meditation2 = (msg.arg1);
				if(sendESenseEnable){
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveMeditation2", ""+meditation2);
				}
				break;
			case TGDevice.MSG_BLINK:
				blink2 = (msg.arg1);
				if(sendBlinkEnable){
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveBlink2", ""+blink2);
				}
				break;
			case TGDevice.MSG_RAW_COUNT:
				rawCount2 = (msg.arg1);
				break;
			case TGDevice.MSG_LOW_BATTERY:
				connectState2 = LOW_BATTERY;
				UnityPlayer.UnitySendMessage("ThinkGear",
						"receiveConnectState2", connectState2);
				break;
			case TGDevice.MSG_RAW_MULTI:
				break;
			case TGDevice.MSG_EEG_POWER:
				TGEegPower eeg = (TGEegPower) msg.obj;
				delta2 = Float.parseFloat(""+eeg.delta);
				theta2 = Float.parseFloat(""+eeg.theta);

				lowGamma2 = Float.parseFloat(""+eeg.lowGamma);
				lowBeta2 = Float.parseFloat(""+eeg.lowBeta);
				lowAlpha2 = Float.parseFloat(""+eeg.lowAlpha);

				highGamma2 = Float.parseFloat(""+eeg.midGamma);
				highBeta2 = Float.parseFloat(""+eeg.highBeta);
				highAlpha2 = Float.parseFloat(""+eeg.highAlpha);
				
				if(sendEEGEnable){
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveDelta2", ""+delta2);
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveTheta2", ""+theta2);
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveLowGamma2", ""+lowGamma2);
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveLowBeta2", ""+lowBeta2);
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveLowAlpha2", ""+lowAlpha2);
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveHighGamma2", ""+highGamma2);
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveHighBeta2", ""+highBeta2);
					UnityPlayer.UnitySendMessage("ThinkGear",
							"receiveHighAlpha2", ""+highAlpha2);
				}
				
			default:
				break;
			}
		}
	};

	@Override
	protected void onDestroy() {
		tgDevice.close();
		tgDevice2.close();
		super.onDestroy();
	}

	@Override
	protected void onResume() {
		super.onResume();
	}

	@Override
	protected void onStop() {
		super.onStop();
	}

	public int checkBTState() {
		if (bluetoothAdapter != null) {
			return bluetoothAdapter.getState();
		}
		return -1;
	}
	
	public int getPairedDeviceNum(){
		if(bluetoothAdapter != null){
			return bluetoothAdapter.getBondedDevices().size();
		}
		return -1;
	}

	public void connectWithRaw() {
		if (tgDevice.getState() != TGDevice.STATE_CONNECTING
				&& tgDevice.getState() != TGDevice.STATE_CONNECTED) {
			tgDevice.connect(true);
		}
	}

	public void connectWithRaw2() {
		if (tgDevice2.getState() != TGDevice.STATE_CONNECTING
				&& tgDevice2.getState() != TGDevice.STATE_CONNECTED) {
			tgDevice2.connect(true);
		}
	}

	public void connectNoRaw() {
		if (tgDevice.getState() != TGDevice.STATE_CONNECTING
				&& tgDevice.getState() != TGDevice.STATE_CONNECTED) {
			tgDevice.connect(false);
		}
	}

	public void connectNoRaw2() {
		if (tgDevice2.getState() != TGDevice.STATE_CONNECTING
				&& tgDevice2.getState() != TGDevice.STATE_CONNECTED) {
			tgDevice2.connect(false);
		}
	}

	public void disconnect() {
		tgDevice.close();
	}

	public void disconnect2() {
		tgDevice2.close();
	}
}