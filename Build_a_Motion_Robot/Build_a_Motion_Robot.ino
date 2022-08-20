// the setup function runs once when you press reset or power the board
#define MLa 8 //left motor 1st pin
#define MLb 9 //left motor 2nd pin
#define MRa 10 //right motor 1st pin
#define MRb 11 //left motor 2nd pin

void setup() { 
  pinMode(MLa, OUTPUT);
  pinMode(MLb, OUTPUT);
  pinMode(MRa, OUTPUT);
  pinMode(MRb, OUTPUT);
}

// Stop both the motors
void loop() {
  digitalWrite(MLa, LOW);
  digitalWrite(MLb, LOW);
  digitalWrite(MRa, LOW);
  digitalWrite(MRb, LOW);
  delay(1000); //wait for 1 second // //Rotate both Motors in Forward Direction//
  digitalWrite(MLa, HIGH);
  digitalWrite(MLb, LOW);
  digitalWrite(MRa, HIGH);
  digitalWrite(MRb, LOW);
  delay(2000); //wait for 1 second // //Rotate both Motors in Backword Direction//
  digitalWrite(MLa, LOW);
  digitalWrite(MLb, HIGH);
  digitalWrite(MRa, LOW);
  digitalWrite(MRb, HIGH);
  delay(2000); //wait for 1 second // //Rotate robot in Right Direction//
  digitalWrite(MLa, HIGH); //Rotate left motor in fwd direction
  digitalWrite(MLb, LOW);
  digitalWrite(MRa, LOW); //Rotate right motor in back direction
  digitalWrite(MRb, HIGH);
  delay(2000); //wait for 1 second // //Rotate robot in left Direction
  digitalWrite(MLa, LOW); //Rotate left motor in fwd direction
  digitalWrite(MLb, HIGH);
  digitalWrite(MRa, HIGH); //Rotate right motor in back direction
  digitalWrite(MRb, LOW);
  delay(2000); //wait for 1 second // //Rotate robot in left Direction
  
}
