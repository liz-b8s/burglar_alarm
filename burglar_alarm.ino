// Burglar Alarm Arduino Code
// D&S Summer School
// The Alan Turing Institute
int buzzer = 3;  // buzzer connected to the arduino on pin 3
int led = 13;  // led connected to the arduino on pin 13
int movement_sensor = 2; // PIR movement sensor connected to the arduino on pin 2
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);  // set the buzzer pin as an output
  pinMode(led, OUTPUT); // set the led pin as an output
  pinMode(movement_sensor, INPUT); // set the movement sensor pin as an input
}
void loop() {
  // put your main code here, to run repeatedly:
  // uncomment example functions to run them
  // you may want to comment out the rest of the code if you do
  // you can do multiline comments with /* ... */
  // led_example();
  // tones_example();
  // pir_sensor_example();
  // bool movement_sensor_input = digitalRead(movement_sensor); // digitalRead tells us if the input is HIGH or LOW
  if (digitalRead(movement_sensor) == HIGH) { // the input is HIGH if movement is detected
    for (int i=0; i < 300; i++) {  // repeat three times
      digitalWrite(led, HIGH);  // turn LED on
      tone(buzzer, 1);  // start buzzer at 1000kHz
      delay(1);  // wait 300 milliseconds
      digitalWrite(led, LOW); // turn LED off
      noTone(buzzer); // start tone
      delay(300); // wait 300 milliseconds
    }
  }
} 