
// Uses millis function to blink an LED attached to pin 6.

const int RED_LED_PIN = 6;
long currentTime, startTime;   
long onTime = 1000;          //LED will be on for 1000 ms.
long offTime = 1000;         //LED will be off for 1000 ms.
int ledIsOn = 0;             //A boolean to keep of the LED state.

void setup() {
  
  pinMode(RED_LED_PIN, OUTPUT);
  startTime = long( millis() );     //Set the start time for the LED.
}

void loop() {

  currentTime = long( millis( ));             //Get the current time.

  //If the LED has been on long enough, turn it off.
  if( ledIsOn == 1 && (currentTime - startTime >= onTime)  ){
    digitalWrite(RED_LED_PIN, LOW );
    ledIsOn = 0;
    startTime = long( millis() );
  }

  //If the LED has been off long enough, turn it on.
  if( ledIsOn == 0 && (currentTime - startTime >= offTime)  ){
    digitalWrite(RED_LED_PIN, HIGH );
    ledIsOn = 1;
    startTime = long( millis() );
  }

  //Now there is lots of time for other things.                   
}


