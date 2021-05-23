const int pinBuzzer = 5;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.

  for ( int i = 11 ; i >=8 ; i--){
    pinMode(i, OUTPUT);
  }

}

// the loop routine runs over and over again forever:
void loop() {
  
  for (int i=11 ; i >= 8 ; i--){
    if(i==8){
        digitalWrite( i , HIGH) ;
       delay (200) ;
       //generar tono de 440Hz durante 1000 ms
       tone(pinBuzzer, 440);
      delay(1000);
       digitalWrite( i , LOW);
       delay (200) ;
       noTone(pinBuzzer);
    
      }else{
        digitalWrite( i , HIGH) ;
       delay (200) ;
       digitalWrite( i , LOW);
       delay (200) ;
      }
  }
}
