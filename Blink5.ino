
struct lightEmittingDiode{
  int pin;
  long onTime;
  long offTime;
  long startTime;
  int onOrOff;
};

const int NUM_OF_LEDS = 4;
int i;
long currentTime;
struct lightEmittingDiode LED[NUM_OF_LEDS];

void setup() {

  currentTime = long( millis() );
  
  for( i = 0; i < NUM_OF_LEDS; i++ ){

    LED[i].pin = i + 2;
    LED[i].onTime = 500;
    LED[i].offTime = 1500;
    LED[i].startTime = currentTime + i*500;
    LED[i].onOrOff = 0;

    pinMode(LED[i].pin, OUTPUT);
    digitalWrite(LED[i].pin, LOW);
  } 
}

void loop() {
    
  currentTime = long( millis() );
  
  for(i = 0; i < NUM_OF_LEDS; i++){
    
    if( LED[i].onOrOff == 1 && (currentTime - LED[i].startTime >= LED[i].onTime) ){
       digitalWrite(LED[i].pin, LOW);                                 
       LED[i].startTime = long( millis() );                                        
       LED[i].onOrOff = 0;
    }
    
    if( LED[i].onOrOff == 0 && (currentTime - LED[i].startTime >= LED[i].offTime) ){
       digitalWrite(LED[i].pin, HIGH);                                
       LED[i].startTime = long( millis() );                                        
       LED[i].onOrOff = 1;
    }
  }
}
