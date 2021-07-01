int red_pin = 16;
int blue_pin = 18;
int green_pin = 20;

void setup() {
  pinMode(red_pin, OUTPUT);
  pinMode(green_pin, OUTPUT);
  pinMode(blue_pin, OUTPUT);
}

void loop() {
  digitalWrite(red_pin, HIGH);
  delay(1000);
  digitalWrite(red_pin, LOW);
  delay(1000);
  
  digitalWrite(green_pin, HIGH);
  delay(1000);
  digitalWrite(green_pin, LOW);
  delay(1000);
  
  digitalWrite(blue_pin, HIGH);
  delay(1000);
  digitalWrite(blue_pin, LOW);
  delay(1000);
}
