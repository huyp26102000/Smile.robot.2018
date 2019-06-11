

void setup()   {
   display.begin(SSD1306_SWITCHCAPVCC);
   display.display();
   display.clearDisplay();
   display.setTextSize(1);
   display.setTextColor(WHITE);
   s.attach(2);

}

void loop()
{
  s.write(90);
int b = random(8);
mpu();
  Serial.print(compAngleX); Serial.print("\t");
  Serial.println("\t");
  Serial.print(compAngleY); Serial.print("\t");
}

