CryVR
=======================



Version 0.2 (To come)
---------------
First HandledDevice stable release 

- Handled device control in a VRPN style with special console and internal hardware listener nodes
- Apk sample file for ArmV7+ 
- Full Unity3D C# source code 

Version 0.17.6
--------------
Current buggy version : VRPNHandledWork !

- Changed to VRPN style handled device control. Buttons node, Analogs node and Tracker nodes added. Events and joystick nodes deleted. 


Version 0.17.5
------------------
MathematicsWork !

- Adding Quaternion flip support and ModFloat for One Euro Filter
- Adding Euler to Quaternion, Quaternion to direction and Quaternion to Euler converters nodes
- Adding EntitySimpleOrientation and EntitySimpleTransform (debug) nodes


Version 0.17.1
---------------
HandledDeviceWork !

- HandledDevice : Send Gyroscope, compass and accelerometer from IOS or Android to CryEngine
- Formated Message to send integers, floats, Vec2, Vec3 and Quaternions from handled device to CryEngine
- Added SetLed node to wiimote manager
- Corrected English translation from different inputs and outputs nodes.

Version 0.17
--------------
AndroidConsoleAppWork !

- First Apk file registering full 3.5.4 console variables and commands.
- Simple console sender from Android to CryEngine (one way)
- CryEngine Console listener node (based on RenEvo nodes)
- Unity C# code source as an Unity package


Version 0.16
-------------------
GuitarHeroWork !

- Beta Guitar Hero 3 controler integration
- Bluetooth stack, Aspect ratio and IR sensivity settings
- Modified Wiimote setup node
- Stop node (Cleanup wiimotes stack)
- Cpp file management


Version 0.15
-------------------
BalanceBoardWork !

- Balance Board integration
- Balance Board [x,y] {-1;1} "gravity center" output value
- Balance Board automatic [0,0] calibration system
- Balance Board weight output
- Balance Board AllInOne Node
- Beta Classic Controler integration
- Classic Controler AllInOne node
- Removed motion sensing option from WiimoteManager node (Motion Sensing set to false by default)


Version 0.12
-----------------

WiiWork !

- Fixing access memory Cryengine crashs
- Adding WiimoteSetup node 
- Fixing Nunchuk & Balance board detection (force Motion sensing off during connection)
- Setup default nodes balanced configuration
- Code optimization
- Full event detection setup (timeouts thresholds and angles detection)
- Roll, pitch and yaw events outputs only one time / frame


Version 0.1 
----------------------

Initial Debug for CryEngine 3.5.4 (32/64 bit).

- Project creation
- VRPN tracker and wiimote (2x nodes) 
- Asymetric camera setup (3x nodes) (not user friendly, not usable for the moment)
- Wiimote controler (8x nodes)
- 3D to 2D coordinates (1x node) 
- One euro filter integration (deleting noise for float, vec2, vec3 and quaternion) (4x nodes)
