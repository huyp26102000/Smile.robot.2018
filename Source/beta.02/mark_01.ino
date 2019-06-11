#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "ma_nguon.h"
// If using software SPI (the default case):
#define OLED_MOSI  11   //D1
#define OLED_CLK   12   //D0
#define OLED_DC    9
#define OLED_CS    8
#define OLED_RESET 10

Adafruit_SSD1306 display(OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);

void setup()   {                
//  Serial.begin(9600);
  display.begin(SSD1306_SWITCHCAPVCC);
  display.display();
  delay(1000);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
}

void loop()
{

  delay(2000);
  display.drawBitmap(0,0,emoji01,128,32,WHITE);
  display.display();
  display.clearDisplay();
  display.drawBitmap(0,0,emoji02,128,32,WHITE);
  display.display();
  display.clearDisplay();
  display.drawBitmap(0,0,emoji04,128,32,WHITE);
  display.display();  
  display.clearDisplay();
  display.drawBitmap(0,0,emoji05,128,32,WHITE);
  display.display();  
  display.clearDisplay();
  display.drawBitmap(0,0,emoji06,128,32,WHITE);
  display.display();  
  display.clearDisplay();
  display.drawBitmap(0,0,emoji09,128,32,WHITE);
  display.display();  
  display.clearDisplay();
  display.drawBitmap(0,0,emoji010,128,32,WHITE);
  display.display();  
  display.clearDisplay();
  display.drawBitmap(0,0,emoji011,128,32,WHITE);
  display.display();  
  display.clearDisplay();
  display.drawBitmap(0,0,emoji012,128,32,WHITE);
  display.display();  
  display.clearDisplay();
  display.drawBitmap(0,0,emoji013,128,32,WHITE);
  display.display();
  delay(500);
  display.clearDisplay();
  display.drawBitmap(0,0,emoji012,128,32,WHITE);
  display.display();
  display.clearDisplay();
  display.drawBitmap(0,0,emoji011,128,32,WHITE);
  display.display();
  display.clearDisplay();
  display.drawBitmap(0,0,emoji010,128,32,WHITE);
  display.display();
  display.clearDisplay();
  display.drawBitmap(0,0,emoji09,128,32,WHITE);
  display.display();  
  display.clearDisplay();
  display.drawBitmap(0,0,emoji08,128,32,WHITE);
  display.display();  
  display.clearDisplay();
  display.drawBitmap(0,0,emoji07,128,32,WHITE);
  display.display();  
  display.clearDisplay();
  display.drawBitmap(0,0,emoji06,128,32,WHITE);
  display.display();  
  display.clearDisplay();
  display.drawBitmap(0,0,emoji04,128,32,WHITE);
  display.display();  
  display.clearDisplay();
  display.drawBitmap(0,0,emoji02,128,32,WHITE);
  display.display();  
  display.clearDisplay();
  display.drawBitmap(0,0,emoji01,128,32,WHITE);
  display.display();
  delay(300);
  
  display.clearDisplay();
  display.drawBitmap(0,0,emoji014,128,32,WHITE);
  display.display();  
  display.clearDisplay();
  display.drawBitmap(0,0,emoji015,128,32,WHITE);
  display.display();  
  display.clearDisplay();
  display.drawBitmap(0,0,emoji016,128,32,WHITE);
  display.display();  
  display.clearDisplay();
  display.drawBitmap(0,0,emoji017,128,32,WHITE);
  display.display();  
delay(100);


}

