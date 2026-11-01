#include <Wire.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_ST7735.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 oled(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

#define TFT_CS    14
#define TFT_DC    13
#define TFT_RST   12
Adafruit_ST7735 tft = Adafruit_ST7735(&SPI, TFT_CS, TFT_DC, TFT_RST);

void setup() {

  Wire.begin();
  
  if(!oled.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    for(;;);
  }
  
  oled.clearDisplay();
  oled.setTextSize(1);
  oled.setTextColor(SSD1306_WHITE);
  oled.setCursor(0, 10);
  oled.println("Screen 1");
  oled.display();

  SPI.begin();

  tft.initR(INITR_BLACKTAB);
  tft.fillScreen(ST7735_BLACK);
  
  tft.setCursor(10, 20);
  tft.setTextColor(ST7735_WHITE);
  tft.setTextSize(1);
  tft.print("Stand Up...");
  
  tft.setCursor(10, 40);
  tft.setTextColor(ST7735_YELLOW);
  tft.print("");
}

void loop() {
}