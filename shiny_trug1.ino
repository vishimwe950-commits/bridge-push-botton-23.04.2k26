// Pin assignments
const int buttonPin = 2;     // Push button connected to digital pin 2
const int led1 = 3;          // LED 1 on pin 8
const int led2 = 4;          // LED 2 on pin 9
const int led3 = 5;         // LED 3 on pin 10

int buttonState = 0;

void setup() {
  // Set LED pins as outputs
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  // Set button pin as input with internal pull-down or pull-up
  pinMode(buttonPin, INPUT_PULLUP); 
  // Note: INPUT_PULLUP means the button should connect to GND when pressed
}

void loop() {
  // Read button state
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    // Button pressed → turn LEDs ON
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  } else {
    // Button not pressed → turn LEDs OFF
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
}
