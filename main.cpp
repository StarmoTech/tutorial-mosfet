int led_pin = 9;

void setup() {

    Serial.begin(9600);
    pinMode(led_pin, OUTPUT);

}

void loop() {

    for (int i = 0; i <= 255; i++) {
        
        analogWrite(led_pin, i);
        Serial.println(i);
        delay(10);
        
      }

    for (int i = 255; i > 0; i--) {
        
        analogWrite(led_pin, i);
        Serial.println(i);
        delay(10);
        
      }

}
