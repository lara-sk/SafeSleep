#include <DHT11.h>

// Definitions for constants.>
#define DHT11_PIN A0
DHT11 dht(DHT11_PIN);

// Definitions for module constants.
#define LED_RED 10
#define LED_YELLOW 9
#define LED_GREEN 8
#define SPEAKER_PIN A1


void setup() {

  // Sets all the pins of 8, 9, 10, and A1 as OUTPUTS to their respective modules.
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(SPEAKER_PIN, OUTPUT);

  //Begin Serial to run at 9600bps.
  Serial.begin(9600);
}

void loop() {
  // Boolean to set if the current humidity levels are safe or not.
  bool isSafe = true;

  // Read the current room humidity.
  int h = dht.readHumidity();

  // Check if any reads failed and exit early (to try again).
  if (isnan(h)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  // Print out to user what the current humidity is.
  Serial.println((String)"Current humidity: " + h);

  // Run humidity result through IF-statement criteria.
  // If humidity is less than 30% or more than 50% --
  // Trigger red LED and set 'isSafe' boolean to false.
  // Print out to user that the humidity has reached 'dangerous levels!'.
  if (h < 30 || h > 50) {
    activateLED("red");
    isSafe = false;
    Serial.println(F("Dangerous levels!"));
  }
  
  // If humidity is between 30% and 35% or between 45% and 50% --
  // Trigger yellow LED and keep 'isSafe' boolean to true.
  // Print out to user that the humidity has reached 'caution levels!'.
  else if (h < 35 || h > 45) {
    activateLED("yellow");
    isSafe = true;
    Serial.println(F("Caution levels!"));
  }
  
  // If humidity is between 35% and 45% --
  // Trigger yellow LED and keep 'isSafe' boolean to true.
  // Print out to user that the humidity has reached 'healthy levels!'.
  else if (h >= 35 || h <= 45) {
    activateLED("green");
    isSafe = true;
    Serial.println(F("Healthy levels!"));
  }

  // Validate if 'isSafe' boolean is true or false.
  // If false, then trigger buzzer to play tone of 500hz for 5 seconds,
  // Which is the time it takes to run another check for the current humidity levels.
  if (isSafe == false) {
    tone(SPEAKER_PIN, 500);
  } else {
    noTone(SPEAKER_PIN);
  }

  // Set delay between loop activations to 5 seconds or 5000 miliseconds.
  delay(5000);
}

// Function to toggle a specified color LED on.
// It takes the string in the function paramaters
// and runs it through an IF-statement to set the correct LED on.
void activateLED(String led_color) {
  // If the string equals to 'red', then turn all LEDs off, then turn the red LED on.
  if (led_color == "red") {
    dismissLED();
    digitalWrite(LED_RED, HIGH); 
  }
  // If the string equals to 'yellow', then turn all LEDs off, then turn the yellow LED on.
  else if (led_color == "yellow") {
    dismissLED();
    digitalWrite(LED_YELLOW, HIGH);    
  }
  // If the string equals to 'green', then turn all LEDs off, then turn the green LED on.
  else if (led_color == "green") {
    dismissLED();
    digitalWrite(LED_GREEN, HIGH);     
  }
}

// Function to set all the LEDs to run on LOW output to turn them off.
void dismissLED() {
  digitalWrite(LED_RED, LOW);
  digitalWrite(LED_YELLOW, LOW);
  digitalWrite(LED_GREEN, LOW);
}