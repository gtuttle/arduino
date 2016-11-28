
// Uses pins 6 & 7 to control the blinking of external red and greeen LEDs.

const int RED_LED_PIN = 6;
const int GREEN_LED_PIN = 7;

void setup() {
  
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
}

void loop() {
  
  digitalWrite(RED_LED_PIN, HIGH);    // Turn the red on...
  digitalWrite(GREEN_LED_PIN, LOW);   // ...and green off.
  delay(1000);                        // Wait for a second.
  
  digitalWrite(RED_LED_PIN, LOW);     // Now do the opposite. 
  digitalWrite(GREEN_LED_PIN, HIGH);
  delay(1000);                     
}


