int red_pin = 16;
int blue_pin = 18;
int green_pin = 20;

int r, g, b;

void setup() {
  pinMode(red_pin, OUTPUT);
  pinMode(green_pin, OUTPUT);
  pinMode(blue_pin, OUTPUT);
  
  r = 0;
  g = 0;
  b = 0;  
}

void loop() {
  for(r = 0, b = 255; r < 255; b--, r++){
    light_led();
  }
  for(g = 0, r = 255; g < 255; r--, g++){
    light_led();
  }
  for(b = 0, g = 255; b < 255; g--, b++){
    light_led();
  }
}


void light_led(){
  analogWrite(red_pin, r);
  analogWrite(green_pin, g);
  analogWrite(blue_pin, b);
  delay(10);
}
