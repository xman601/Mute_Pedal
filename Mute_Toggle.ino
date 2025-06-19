#include <Keyboard.h>

const int Mute_Button_Pin = 2;
bool Button_State = HIGH;

void setup() {
  pinMode(Mute_Button_Pin, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  bool Current_State = digitalRead(Mute_Button_Pin);

  if (Button_State == HIGH && Current_State == LOW) {
    Keyboard.write(KEY_F13);
  }

  Button_State = Current_State;
  delay(50);
}

