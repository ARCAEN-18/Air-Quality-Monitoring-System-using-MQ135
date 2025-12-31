#include <LiquidCrystal.h> 
int pollution = 56; 
LiquidCrystal lcd(2, 3, 4, 5, 6, 7); 
void setup() { 
pinMode(A1, INPUT); 
Serial.begin(9600); 
pinMode(2, OUTPUT); 
pinMode(3, OUTPUT); 
pinMode(4, OUTPUT); 
pinMode(5, OUTPUT); 
pinMode(6, OUTPUT); 
lcd.begin(16, 2); 
lcd.setCursor(0, 0); 
lcd.print("Pollution Level:"); 
} 
void loop() { 
pollution = analogRead(A1); 
Serial.println(pollution); 
int PollPercentage = (pollution / 1023.0) * 100; 
Serial.print(PollPercentage); 
Serial.println("percent pollution"); 
digitalWrite(2, LOW); 
digitalWrite(3, LOW); 
digitalWrite(4, LOW); 
digitalWrite(5, LOW); 
lcd.setCursor(6, 1); 
lcd.print(pollution); 
if (pollution > 150) { 
digitalWrite(2, HIGH); 
tone(6, 800, 6000); 
delay(4000); 
} else if (pollution > 100) { 
digitalWrite(3, HIGH); 
delay(1000); 
} else if (pollution > 50) { 
digitalWrite(4, HIGH); 
delay(1000); 
} else { 
digitalWrite(5, HIGH); 
} 
delay(100); 
} 
