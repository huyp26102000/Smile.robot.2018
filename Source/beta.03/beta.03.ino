#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "angle.h"
#include "happy.h"
#include "angry.h"
#include "blink.h"
#include "dizziness.h"  
#include "roll_the_eyes.h"
#include "sad.h"

#define OLED_MOSI  4
#define OLED_CLK   5
#define OLED_DC    2
#define OLED_CS    0
#define OLED_RESET 3

Adafruit_SSD1306 display(OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);

void setup()   {                
  Serial.begin(9600);
  display.begin(SSD1306_SWITCHCAPVCC);
  display.clearDisplay();
//  begining();
  display.display();
//  delay(500);
}
void loop()
{
  int  a = random(3);
  switch(a)
  {
    case 1:
    angle();
    delay(50);
    break;
    case 2:
    angry();
    delay(50);
    break;
  }
  
  
}
