#include <Keyboard.h>

int button = 7;
int led = 9;
int A = 0;
void setup() {
  Keyboard.begin();
  delay(3000);
  pinMode(button, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  attachInterrupt(4, test, LOW );
}

void loop() {
  if (A == 1) {
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    A = 0;
  }
}

void test() {
  while (digitalRead(button) == 0) {
  }
//  Keyboard.print("choeseungu735@gmail.com");
//  Keyboard.write(KEY_TAB);
  Keyboard.print("choeresb0215");
  Keyboard.write (KEY_RETURN);
  A = 1;
}
