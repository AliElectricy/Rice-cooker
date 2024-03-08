#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal.h>


LiquidCrystal lcd(8, 9, 4, 5, 6, 7);



int time = 0;
int RelPin = 3;

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(4, 0);
  lcd.print("Rice Timer");
  lcd.setCursor(0, 1);
  lcd.print("Press Select");
  pinMode(RelPin, OUTPUT);
  digitalWrite(RelPin,HIGH);
  delay(100);

}

void loop() {


  if (analogRead(A0) < 200 && analogRead(A0) > 60 ) {
    time += 10 * 60; // UP 10 minutes
    delay(500);
  }
  if (analogRead(A0) < 400 && analogRead(A0) > 200) {
    delay(500);
    if (time == 6000)
    {
      lcd.clear();
      lcd.begin(16, 2);
      lcd.setCursor(4, 0);
      lcd.print("Rice Timer");
      lcd.setCursor(0, 1);
      lcd.print("Press Select");
    }
    
    time -= 10 * 60; // down 10 minutes
  }
  lcd.setCursor(13,1);
  lcd.print(time / 60);   // print the hour (10 digits)
  if (analogRead(A0) < 800 && analogRead(A0) > 600) {
    lcd.clear();
    lcd.setCursor(4,0);
    lcd.print("Warning..");
    delay(2500);
    lcd.clear();
    digitalWrite(RelPin, LOW);
    delay(100);

    while (time > 0) {
      lcd.setCursor(0, 0);
      lcd.print("Time: ");
      lcd.print(time / 60);
      lcd.print(":");
      lcd.print(time % 60);
      lcd.setCursor(4,1);
      lcd.print("Working...");
      delay(1000);
      time--;
    }
    digitalWrite(RelPin, HIGH);
    delay(100);


    lcd.clear();
    lcd.setCursor(4, 0);
    lcd.print("Rice Timer");
    lcd.setCursor(0, 1);
    lcd.print("Press Select");
  }
}