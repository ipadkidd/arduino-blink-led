// Arduino LED Blink Script

const int LED_PIN = 3;
const int BLINK_DELAY = 1000;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(BLINK_DELAY);
  digitalWrite(LED_PIN, LOW);
  delay(BLINK_DELAY);
}
