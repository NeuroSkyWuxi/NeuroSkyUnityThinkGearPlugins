# NeuroSkyUnityThinkGearPlugins
A plugins for Unity to create Android and iOS app and communicate with NeuroSky MindWave Device

The source code for Assets\Plugins\Android\UnityThinkGear.aar is here:
https://github.com/NeuroSkyWuxi/UnityThinkGearAndroid
You can build your own UnityThinkGear.aar

NeuroSkyUnityThinkGear For iOS & Android Version 1.1.2


Instructions For iOS:
--------------------------------------

Run the Demo:

1.Drag the ThinkGear prefab from Project view to Hierarchy view

2.Drag the DisplayDataDemo prefab from Project view to Hierarchy view

3.Build project to Xcode project.

4.Open the Xcode project.

5.Navigate to your project settings.

6.Select Build Phases.

7.Expand Link Binary with Libraries

8.Click on + and select ExternalAccessory.framework and Accelerate.framework

9.Open Info.plist

10.Right Click and "Add Row",select "Supported external accessory protocols"

11.Add "com.neurosky.thinkgear" for the value of protocol.

12.Select Target and click General,Select Embedded Binaries, add AlgoSdk.framework

13.Build and Run Xcode project.


Run your own project:

1.Drag the ThinkGear prefab from Project view to Hierarchy view	

2.At the place you want to use Attention,Meditation,EEG and so on,add code like following

   void Start()
    {
		
		controller = GameObject.Find("ThinkGear").GetComponent<ThinkGearController>();
		
		controller.UpdatePoorSignalEvent += OnUpdatePoorSignal;
		controller.UpdateAttentionEvent += OnUpdateAttention;
		controller.UpdateMeditationEvent += OnUpdateMeditation;
		
		controller.UpdateDeltaEvent += OnUpdateDelta;
		controller.UpdateDeviceInfoEvent += OnUpdateDeviceInfo;
    }
    

3.Implement every function above

......

......

......

4.Build project to Xcode project.

5.Open the Xcode project.

6.Navigate to your project settings.

7.Select Build Phases.

8.Expand Link Binary with Libraries

9.Click on + and select ExternalAccessory.framework and Accelerate.framework

10.Open Info.plist

11.Right Click and "Add Row",select "Supported external accessory protocols"

12.Add "com.neurosky.thinkgear" for the value of protocol.

13.Build and Run Xcode project.





Instructions For Android:
--------------------------------------


Run the Demo:

1.Drag the ThinkGear prefab from Project view to Hierarchy view

2.Drag the DisplayDataDemo prefab from Project view to Hierarchy view

3.Build project to an apk file.

4.Install apk to Android device.

5.Click "Connect1" to try to connect headset



Run your own project:

1.Drag the ThinkGear prefab from Project view to Hierarchy view	

2.At the place you want to use Attention,Meditation,EEG and so on,add following code



   void Start()
    {
		
		controller = GameObject.Find("ThinkGear").GetComponent<TGDeviceController>();
		
		controller.UpdatePoorSignal1Event += OnUpdatePoorSignal;
		controller.UpdateAttention1Event += OnUpdateAttention;
		controller.UpdateMeditation1Event += OnUpdateMeditation;
		
		controller.UpdateDelta1Event += OnUpdateDelta;
		
    }
    

3.Implement every function above

4.Call Connect() function of TGCConnectionController to connect

5.Call disconnect() function of TGCConnectionController to disconnect


Note:
--------------------------------------
Before building,you must fill Bundle Identifier in Other Settings with "com.yourcompany.yourappname",
and must modify Plugins/Android/AndroidManifest.xml,like package="com.yourcompany.yourappname".

Any question/issues,contact lifebeat@neurosky.com

