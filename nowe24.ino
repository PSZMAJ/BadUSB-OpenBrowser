#include <Keyboard.h>





void setup() {
  // put your setup code here, to run once:
Keyboard.begin();
delay(2000);
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press('r');
delay(20);
Keyboard.releaseAll();
delay(50);
Keyboard.print("cmd.exe");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(500);
Keyboard.print("start www.ehaker.pl");
Keyboard.releaseAll();
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
Keyboard.print("exit");
Keyboard.releaseAll();
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
}

void loop() {
  // put your main code here, to run repeatedly:
//delay(500);
//setup();
//delay(500);
}
