// thu vien da nhiem
#include <Arduino_FreeRTOS.h>
// thu vien oled
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
#define OLED_MOSI  11
#define OLED_CLK   12
#define OLED_DC    9
#define OLED_CS    8
#define OLED_RESET 10
#include<Servo.h>
Servo s;
// thu vien mpu
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
Adafruit_SSD1306 display(OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);
//**************
void TaskBlink( void *pvParameters );
void TaskAnalogRead( void *pvParameters );
void setup() {
  Serial.begin(9600);
  while (!Serial) {}
xTaskCreate(
    Task1
    ,  (const portCHAR *)"Task1"
    ,  256
    ,  NULL
    ,  1
    ,  NULL );
 
xTaskCreate(
    Task2
    ,  (const portCHAR *) "Task2"
    ,  256
    ,  NULL
    ,  1
    ,  NULL );
}
void loop()
{}
void Task1(void *pvParameters)  // This is a task.
{
  (void) pvParameters;
  mpusetup();
  for (;;)
  {
  mpu();
  Serial.println(compAngleY);
  }
}
void Task2(void *pvParameters)  // This is a task.
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
  }
}
