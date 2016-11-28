
// Uses millis function to blink an LED attached to pin 6.

const int RED_LED_PIN = 6;
const int GREEN_LED_PIN = 7;
long currentTime, redStartTime, greenStartTime;   
long redOnTime, greenOnTime, redOffTime, greenOffTime;                  
int redIsOn, greenIsOn;             

void setup() {
  //Initialize everything, with both LEDs turned off.
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  redOnTime = 1000;
  redOffTime = 1000;
  greenOnTime = 500;
  greenOffTime = 500;
  redIsOn = 0;
  greenIsOn = 0;
  digitalWrite( RED_LED_PIN, LOW );
  digitalWrite( GREEN_LED_PIN, LOW );
  redStartTime = long( millis() );
  greenStartTime = long( millis() );
}

void loop() {

  currentTime = long( millis( ));             

  //If the red LED has been on long enough, turn it off.
  if( redIsOn == 1 && (currentTime - redStartTime >= redOnTime)  ){
    digitalWrite(RED_LED_PIN, LOW );
    redIsOn = 0;
    redStartTime = long( millis() );
  }

  //If the red LED has been off long enough, turn it on.
  if( redIsOn == 0 && (currentTime - redStartTime >= redOffTime)  ){
    digitalWrite(RED_LED_PIN, HIGH );
    redIsOn = 1;
    redStartTime = long( millis() );
  }

  //If the green LED has been on long enough, turn it off.
  if( greenIsOn == 1 && (currentTime - greenStartTime >= greenOnTime)  ){
    digitalWrite(GREEN_LED_PIN, LOW );
    greenIsOn = 0;
    greenStartTime = long( millis() );
  }

  //If the green LED has been off long enough, turn it on.
  if( greenIsOn == 0 && (currentTime - greenStartTime >= greenOffTime)  ){
    digitalWrite(GREEN_LED_PIN, HIGH );
    greenIsOn = 1;
    greenStartTime = long( millis() );
  }

  //Now there is lots of time for other things.                   
}


