------------------------------------------------------------------------------------
NeuroSkyUnityThinkGear For iOS & Android Version 1.1.2
Author:Chris
Date:2015.6.2

Change Log:
1)Updated iOS SDK to fix no PoorSignal issue on iOS
2)Updated UnityThinkGear.jar to fix no RawData and Blink issues on Android 
------------------------------------------------------------------------------------
Instructions For iOS:

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
10.Right Click and "Add Row",select "Support external accessory protocols"
11.Add "com.neurosky.thinkgear" for the value of protocol.
12.Build and Run Xcode project.

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
11.Right Click and "Add Row",select "Support external accessory protocols"
12.Add "com.neurosky.thinkgear" for the value of protocol.
13.Build and Run Xcode project.

Instructions For Android:

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

Note:Before building,you must fill Bundle Identifier in Other Settings with "com.yourcompany.yourappname",
and must modify Plugins/Android/AndroidManifest.xml,like package="com.yourcompany.yourappname".

Any question/issues,contact cwang@neurosky.com



------------------------------------------------------------------------------------
NeuroSkyUnityThinkGear For iOS & Android Version 1.1.1
Author:Chris
Date:2015.5.20

Change Log:
1)Combined with UnityThinkGear For Android
2)Removed Two Player Model from UnityThinkGear For Android 
------------------------------------------------------------------------------------
Instructions For iOS:

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
10.Right Click and "Add Row",select "Support external accessory protocols"
11.Add "com.neurosky.thinkgear" for the value of protocol.
12.Build and Run Xcode project.

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
11.Right Click and "Add Row",select "Support external accessory protocols"
12.Add "com.neurosky.thinkgear" for the value of protocol.
13.Build and Run Xcode project.

Instructions For Android:

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

Note:Before building,you must fill Bundle Identifier in Other Settings with "com.yourcompany.yourappname",
and must modify Plugins/Android/AndroidManifest.xml,like package="com.yourcompany.yourappname".

Any question/issues,contact cwang@neurosky.com



------------------------------------------------------------------------------------
UnityThinkGear For iOS Version 1.1.0
Author:Chris
Date:2015.5.8

Change Log:
1)Replaced old SDK with latest SDK.
2)Removed FSK related files.
3)Fixed compiling issue for iOS 64bit. 
------------------------------------------------------------------------------------
Instructions

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
10.Right Click and "Add Row",select "Support external accessory protocols"
11.Add "com.neurosky.thinkgear" for the value of protocol.
12.Build and Run Xcode project.

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
11.Right Click and "Add Row",select "Support external accessory protocols"
12.Add "com.neurosky.thinkgear" for the value of protocol.
13.Build and Run Xcode project.

Any question/issues,contact cwang@neurosky.com







------------------------------------------------------------------------------------
UnityThinkGear For iOS Version 1.0.0
Author:Chris
Date:2013.3.27

Change Log:
1)Initialize project.

------------------------------------------------------------------------------------
Instructions

Run the Demo:
1.Drag the ThinkGear prefab from Project view to Hierarchy view
2.Drag the DisplayDataDemo prefab from Project view to Hierarchy view
3.Build project to Xcode project.
4.Open the Xcode project.
5.Inside XCode: expand "Unity-iPhone" in Groups & Files tree.
6.Right click on "Classes" subfolder and choose "Add->Existing files...".
7.In open dialog navigate to the ./Libraries/ folder and select 
  "TGAccessoryDelegate.h"+ "TGAccessoryManager.h" + "UnityThinkGear.h" + "UnityThinkGearController.h".
8.Click "Add".
9.Navigate to your project settings.
10.Select Build Phases.
11.Expand Link Binary with Libraries
12.Click on + and select ExternalAccessory.framework
13.Open Info.plist
14.Right Click and "Add Row",select "Support external accessory protocols"
15.Add "com.neurosky.thinkgear" for the value of protocol.
16.Build and Run Xcode project.

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
		
    }
    
3.Implement every function above
......
......
......
4.Build project to Xcode project.
5.Open the Xcode project.
6.Inside XCode: expand "Unity-iPhone" in Groups & Files tree.
7.Right click on "Classes" subfolder and choose "Add->Existing files...".
8.In open dialog navigate to the ./Libraries/ folder and select 
  "TGAccessoryDelegate.h"+ "TGAccessoryManager.h" + "UnityThinkGear.h" + "UnityThinkGearController.h".
9.Click "Add".
10.Navigate to your project settings.
11.Select Build Phases.
12.Expand Link Binary with Libraries
13.Click on + and select ExternalAccessory.framework
14.Open Info.plist
15.Right Click and "Add Row",select "Support external accessory protocols"
16.Add "com.neurosky.thinkgear" for the value of protocol.
17.Build and Run Xcode project.

Any question/issues,contact cwang@neurosky.com