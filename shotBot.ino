#define PUMP_1_PIN 7
#define BUTTON_1_PIN 2
#define PUMP_1_TIME 2500
#define LED_PIN 13

void setup() {
  pinMode(PUMP_1_PIN, OUTPUT);
  pinMode(LED_PIN, INPUT);
  pinMode(BUTTON_1_PIN, INPUT);
}

void loop() {
  if(digitalRead(BUTTON_1_PIN) == HIGH) {
     digitalWrite(LED_PIN, HIGH);     //turn pin on
     digitalWrite(PUMP_1_PIN, HIGH); //turn pump 1 on
     delay(PUMP_1_TIME);             //wait PUMP_1_TIME milliseconds
     digitalWrite(PUMP_1_PIN, LOW);  //turn pump 1 off
     digitalWrite(LED_PIN, LOW);     // turn led off
  }
}
