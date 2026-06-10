#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

#define ONE_WIRE_BUS 2

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensor(&oneWire);

void setup() {
  lcd.init();
  lcd.setBacklight(HIGH);
  Serial.begin(9600);
  Serial.println("Sensor de temperatura Dallas DS18b20");
  sensor.begin();
}

void loop() {
  sensor.requestTemperatures();
  float leitura = sensor.getTempCByIndex(0);
  Serial.println(leitura);

  if (leitura < 25) {
    lcd.setCursor(0, 0);
    lcd.print("Endotermica:");
    lcd.setCursor(0, 1);
    lcd.print(leitura);
  } else if (leitura > 29) {
    lcd.setCursor(0, 0);
    lcd.print("Exotermica:");
    lcd.setCursor(0, 1);
    lcd.print(leitura);
  } else {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Normal:");
    lcd.setCursor(0, 1);
    lcd.print(leitura);
  }

  delay(100);
}
