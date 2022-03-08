#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
int sensorValue;

void setup() 
{
  lcd.begin(16, 2); 
  lcd.print("SRI ELECTRONIC & EMBEDDED SOLUTIONS");
  delay(500);
}

void loop()
{
  sensorValue = analogRead(A0);
  lcd.setCursor(0, 1);
  lcd.print("ADC VALUE:");
  lcd.setCursor(10, 1);
  Dec2ascii(sensorValue);
  delay(1000);
}

void Dec2ascii(unsigned int value)
{
  unsigned char Dig1,Dig2,Dig3,Dig4;

  Dig4=value%10;
  value=value/10;
  
  Dig3=value%10;
  value=value/10;
  
  Dig2=value%10;
  value=value/10; 
      
  Dig1=value;
  
  lcd.print(Dig1);
  delay(2); 
  lcd.print(Dig2);
  delay(2);
  lcd.print(Dig3);
  delay(2); 
  lcd.print(Dig4);
  delay(2); 
 }
