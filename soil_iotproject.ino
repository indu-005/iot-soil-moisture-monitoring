// ---- Constants for Easy Editing ----
const int SOIL_SENSOR_PIN = A0;
const int RED_LED_PIN = 7;
const int GREEN_LED_PIN = 8;

const int DRY_THRESHOLD = 500;   

const int AVERAGE_COUNT = 5;
const long BAUD_RATE = 9600;
const unsigned long READ_INTERVAL = 1000; 

// ---- Setup ----
void setup() {
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);

  // start with both OFF
  digitalWrite(RED_LED_PIN, LOW);
  digitalWrite(GREEN_LED_PIN, LOW);

  Serial.begin(BAUD_RATE);
}


void loop() {
  int sum = 0;

  for (int i = 0; i < AVERAGE_COUNT; i++) {
    sum += analogRead(SOIL_SENSOR_PIN);
    delay(5); 
  }

  int averageValue = sum / AVERAGE_COUNT;

  Serial.print("Moisture value: ");
  Serial.println(averageValue);

  // For capacitive sensor: LOW = DRY, HIGH = WET
  if (averageValue < DRY_THRESHOLD) {
    // Soil is DRY  -> Red ON, Green OFF
    digitalWrite(RED_LED_PIN, HIGH);
    digitalWrite(GREEN_LED_PIN, LOW);
  } else {
    // Soil is WET -> Green ON, Red OFF
    digitalWrite(RED_LED_PIN, LOW);
    digitalWrite(GREEN_LED_PIN, HIGH);
  }

  delay(READ_INTERVAL);
}
