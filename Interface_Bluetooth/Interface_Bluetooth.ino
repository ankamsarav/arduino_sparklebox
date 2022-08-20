// the setup function runs once when you press reset or power the board
#define ledPin 13
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  if(Serial.available()){
    char data=Serial.read();
    if(data=='1'){
      digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)    
      Serial.println("LED is ON");
    }
    else if (data=='0'){
      digitalWrite(ledPin, LOW);   // turn the LED on (HIGH is the voltage level)    
      Serial.println("LED is OFF");      
    }  
  }                      // wait for a second
}
