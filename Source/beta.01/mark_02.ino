#include "angle_right.h"
#include <Arduino_FreeRTOS.h>
#include <Wire.h>
#include <Kalman.h>
#define RESTRICT_PITCH
Kalman kalmanX;
Kalman kalmanY;
double accX, accY, accZ;
double gyroX, gyroY, gyroZ;
int16_t tempRaw;
double gyroXangle, gyroYangle;
double compAngleX, compAngleY;
double kalAngleX, kalAngleY;
uint32_t timer;
uint8_t i2cData[14]; 
// thu vien oled
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define OLED_MOSI  11   //D1
#define OLED_CLK   12   //D0
#define OLED_DC    9
#define OLED_CS    8
#define OLED_RESET 10
Adafruit_SSD1306 display(OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);
// da nhiem
void Task1( void *pvParameters );
void Task2( void *pvParameters );
void setup() {
xTaskCreate( Task1 , (const portCHAR *) "Task1", 256, NULL, 0, NULL );
xTaskCreate( Task2 , (const portCHAR *) "Task2", 256, NULL, 0, NULL );
xTaskCreate( Task3 , (const portCHAR *) "Task2", 256, NULL, 0, NULL );

}
void loop()
{}
void Task1(void *pvParameters)
{
(void) pvParameters;
   mpusetup();
   
for (;;)
{
mpu();

if(compAngleY<=-55){angleright();}
}
}
void Task2(void *pvParameters)
{
(void) pvParameters;
pinMode(A0,OUTPUT);
pinMode(7,OUTPUT);
pinMode(13,OUTPUT);
pinMode(A1,OUTPUT);
pinMode(A2,OUTPUT);
pinMode(A3,OUTPUT);
for (;;)
{
led();
}}
void Task3(void *pvParameters)
{
(void) pvParameters;
display.begin(SSD1306_SWITCHCAPVCC);
   display.display();
   display.clearDisplay();
   display.setTextSize(1);
   display.setTextColor(WHITE);
for (;;)
{
display.clearDisplay();
  display.drawBitmap(0,0,angle01,128,32,WHITE);
  display.display();
  delay(20);
}}


