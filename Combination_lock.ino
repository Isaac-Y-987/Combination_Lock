int value1 = LOW;
int value2 = LOW;
int value3 = LOW;
int value4 = LOW;
int attempt = 0;
const int redLED = 12;
const int greenLED = 10;
const int button1 = 7;
const int button2 = 6;
const int button3 = 5;
const int button4 = 4;
const int combination = 4 ;//1, 4, 2, 3
int order[] = {1, 4, 2, 1};
void setup() {
  // put your setup code here, to run once:
  //Serial.begin();
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  value1 = digitalRead(button1);
  Serial.print(value1);
  value2 = digitalRead(button2);
  Serial.print(value2);
  value3 = digitalRead(button3);
  Serial.print(value3);
  value4 = digitalRead(button4);
  Serial.print(value4);
  Serial.println(attempt);
  //Do the rest DONE
  //Make a list with the values in the right order DONE
  if (value1 == HIGH) {
    attempt += 1;
  }
  else {
    int attempt = 0;
    digitalWrite(redLED, HIGH);
    delay(1000);
    digitalWrite(redLED, LOW);
  }
  if (value4 == HIGH) {
    attempt += 1;
  }
  else {
    int attempt = 0;
    digitalWrite(redLED, HIGH);
    delay(1000);
    digitalWrite(redLED, LOW);
  }
  if (value2 == HIGH) {
    attempt += 1;
  }
  else {
    int attempt = 0;
    digitalWrite(redLED, HIGH);
    delay(1000);
    digitalWrite(redLED, LOW);
  }
  if (value3 == HIGH) {
    attempt += 1;
  }
  else {
    int attempt = 0;
    digitalWrite(redLED, HIGH);
    delay(1000);
    digitalWrite(redLED, LOW);
  }
  if (attempt == combination){
    digitalWrite(greenLED, HIGH);
    delay(1000);
    digitalWrite(greenLED, LOW);
  }
delay(1000);
}
