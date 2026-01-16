#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11
#define BUZZER 8
#define TEMP_LIMIT 35   // buzzer threshold

// Change 0x27 to 0x3F if LCD is blank
LiquidCrystal_I2C lcd(0x27, 16, 2);
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  pinMode(BUZZER, OUTPUT);
  digitalWrite(BUZZER, LOW);

  lcd.init();
  lcd.backlight();

  dht.begin();

  lcd.setCursor(0, 0);
  lcd.print("Temp & Humidity");
  delay(2000);
  lcd.clear();
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature(); // Celsius

  lcd.setCursor(0, 0);
  lcd.print("Temp: ");

  if (isnan(temperature)) {
    lcd.print("Error   ");
    digitalWrite(BUZZER, LOW);
  } else {
    lcd.print(temperature);
    lcd.print(" C  ");

    // 🔔 Buzzer logic
    if (temperature > TEMP_LIMIT) {
      tone(BUZZER, 1000);   // beep
    } else {
      noTone(BUZZER);
    }
  }

  lcd.setCursor(0, 1);
  lcd.print("Hum : ");

  if (isnan(humidity)) {
    lcd.print("Error   ");
  } else {
    lcd.print(humidity);
    lcd.print(" %   ");
  }

  delay(2000); // DHT11 safe delay
}