// Complete Instructions: https://RandomNerdTutorials.com/esp32-digital-inputs-outputs-arduino/

// set pin numbers
const int buttonPin = 4;  // the number of the pushbutton pin
const int ledPin1 =  5;    // the number of the LED pin
const int ledPin2 =  23; 

// variable for storing the pushbutton status 
int buttonState = 0;

void setup() {
  Serial.begin(115200);  
  // initialize the pushbutton pin as an input
  pinMode(buttonPin, INPUT);
  // initialize the LED pin as an output
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  // read the state of the pushbutton value
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH
  if (buttonState == HIGH) {
    // turn LED on
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
  } else {
    // turn LED off
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
  }
}
