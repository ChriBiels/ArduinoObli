#define pinLED1 9
#define pinLED2 11
#define pinLED3 10

void setup() {

 pinMode(pinLED1, OUTPUT);  
 pinMode(pinLED2, OUTPUT);  
 pinMode(pinLED3, OUTPUT);  

}

void loop() {
 
 digitalWrite(pinLED1, HIGH);
 digitalWrite(pinLED2, HIGH);
 digitalWrite(pinLED3, HIGH);
 delay(1000);
 digitalWrite(pinLED1, LOW);   
 digitalWrite(pinLED2, LOW);
 digitalWrite(pinLED3, LOW);
 delay(1000); 
 
  
}
