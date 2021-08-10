
#include <SPI.h>

#include <TFT_eSPI.h>       // Hardware-specific library

#define ADC_EN 14 //ADC_EN is the ADC detection enable port
#define ADC_PIN 34
#define BUTTON_1 35
#define BUTTON_2 0

TFT_eSPI tft = TFT_eSPI();  // Invoke custom library

void setup(void) {
  tft.init();

  tft.fillScreen(TFT_BLACK);

  tft.setRotation(3);
  
  // Set "cursor" at top left corner of display (0,0) and select font 4
  tft.setCursor(0, 0, 4);

  // Set the font colour to be white with a black background
  tft.setTextColor(TFT_WHITE, TFT_BLACK);

  // We can now plot text on screen using the "print" class
  tft.println("Hello World\n");
  
  tft.setTextColor(TFT_RED, TFT_BLACK);
  tft.println("Red text");
  
  tft.setTextColor(TFT_GREEN, TFT_BLACK);
  tft.println("Green text");
  
  tft.setTextColor(TFT_BLUE, TFT_BLACK);
  tft.println("Blue text");

}

void loop() {
  //tft.drawCircle(100, 200, 15, TFT_WHITE);

  // tft.invertDisplay( false ); // Where i is true or false
 
  // tft.fillScreen(TFT_BLACK);
  
  // tft.setCursor(0, 0, 4);

  // tft.setTextColor(TFT_WHITE, TFT_BLACK);
  // tft.println("Invert OFF\n");

  // tft.println("White text");
  
  // tft.setTextColor(TFT_RED, TFT_BLACK);
  // tft.println("Red text");
  
  // tft.setTextColor(TFT_GREEN, TFT_BLACK);
  // tft.println("Green text");
  
  // tft.setTextColor(TFT_BLUE, TFT_BLACK);
  // tft.println("Blue text");

  // delay(2000);


  // // Binary inversion of colours
  // tft.invertDisplay( true ); // Where i is true or false
 
  // tft.fillScreen(TFT_BLACK);
  
  // tft.setCursor(0, 0, 4);

  // tft.setTextColor(TFT_WHITE, TFT_BLACK);
  // tft.println("Invert ON\n");

  // tft.println("White text");
  
  // tft.setTextColor(TFT_RED, TFT_BLACK);
  // tft.println("Red text");
  
  // tft.setTextColor(TFT_GREEN, TFT_BLACK);
  // tft.println("Green text");
  
  // tft.setTextColor(TFT_BLUE, TFT_BLACK);
  // tft.println("Blue text");

  delay(2000);
}
