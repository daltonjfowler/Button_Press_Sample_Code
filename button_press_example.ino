int buttonPin = 2; //button pin in d2
int ledPin = 3; // button ping in d3
int buttonRead = 0; // hold button press
void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT); 
  pinMode(ledPin, OUTPUT); 
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonRead = digitalRead(buttonPin); // see if button is pressed, 1 is press 0 is not pressed
  if (buttonRead == 1) { // checked if button is pressed
    digitalWrite(ledPin, HIGH); // turn on led if pressed
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }
}
