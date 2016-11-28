
// Uses pin 6 to control the blinking of an external red LED.

const int RED_LED_PIN = 6;

void setup() {
  
  pinMode(RED_LED_PIN, OUTPUT);
}

void loop() {
  
  digitalWrite(RED_LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(RED_LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}


