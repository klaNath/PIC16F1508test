/*********************************************************************
This is a library for our Monochrome OLEDs based on SSD1306 drivers
  Pick one up today in the adafruit shop!
  ------> http://www.adafruit.com/category/63_98
These displays use SPI to communicate, 4 or 5 pins are required to
interface
Adafruit invests time and resources providing this open source code,
please support Adafruit and open-source hardware by purchasing
products from Adafruit!
Written by Limor Fried/Ladyada  for Adafruit Industries.
BSD license, check license.txt for more information
All text above, and the splash screen below must be included in any redistribution
*********************************************************************/


#include <xc.h>
#include "SSD1306tiny.h"
#include <stdint.h>
#include "I2CMaster.h"
#include "digitfont.h"

#define SSD1306_ADDR 0x3C


void ssd1306_command(uint8_t command) {
    uint8_t controll = 0;
    uint8_t ans = 0;
    ans = start_I2C(SSD1306_ADDR, 0); //write start
    if(ans == 0){
        send_I2C(controll);
        send_I2C(command);
    }
    stop_I2C();
    return;
}

void invertDisplay(uint8_t i) {
  if (i == 1) {
    ssd1306_command(SSD1306_INVERTDISPLAY);
  } else {
    ssd1306_command(SSD1306_NORMALDISPLAY);
  }
}

void clearDisplay(void){
    uint8_t colnum, pagenum = 0;
    ssd1306_command(SSD1306_COLUMNADDR);
    ssd1306_command(0);
    ssd1306_command(SSD1306_LCDWIDTH-1);
    ssd1306_command(SSD1306_PAGEADDR);
    ssd1306_command(0); // Page start address (0 = reset)
    ssd1306_command(7); // Page end address
    for (uint16_t i=0; i<(SSD1306_LCDWIDTH*SSD1306_LCDHEIGHT/8); i++) {
      // send a bunch of data in one xmission
      start_I2C(SSD1306_ADDR, 0);
      send_I2C(0x40);
      for (uint8_t x=0; x<16; x++) {
        send_I2C(0);
        i++;
      }
      i--;
      stop_I2C();
    }
}

void put_0_Display(void){
    uint8_t colnum, pagenum = 0;
    ssd1306_command(SSD1306_COLUMNADDR);
    ssd1306_command(0);
    ssd1306_command(FONT_WIDTH-1);
    ssd1306_command(SSD1306_PAGEADDR);
    ssd1306_command(0); // Page start address (0 = reset)
    ssd1306_command(6); // Page end address
    for (uint16_t i=0; i<(FONT_WIDTH*FONT_HEIGHT/8); i++) {
      // send a bunch of data in one xmission
      start_I2C(SSD1306_ADDR, 0);
      send_I2C(0x40);
      for (uint8_t x=0; x<38; x++) {
        send_I2C(font_0[i]);
        i++;
      }
      i--;
      stop_I2C();
    }
}

void initDisplay(){
    // Init sequence
  ssd1306_command(SSD1306_DISPLAYOFF);                    // 0xAE
  ssd1306_command(SSD1306_SETDISPLAYCLOCKDIV);            // 0xD5
  ssd1306_command(0x80);                                  // the suggested ratio 0x80

  ssd1306_command(SSD1306_SETMULTIPLEX);                  // 0xA8
  ssd1306_command(SSD1306_LCDHEIGHT - 1);

  ssd1306_command(SSD1306_SETDISPLAYOFFSET);              // 0xD3
  ssd1306_command(0x0);                                   // no offset
  ssd1306_command(SSD1306_SETSTARTLINE | 0x0);            // line #0
  ssd1306_command(SSD1306_CHARGEPUMP);                    // 0x8D
  ssd1306_command(0x14);
  ssd1306_command(SSD1306_MEMORYMODE);                    // 0x20
  ssd1306_command(0x00);                                  // 0x0 act like ks0108
  ssd1306_command(SSD1306_SEGREMAP | 0x1);
  ssd1306_command(SSD1306_COMSCANDEC);

  ssd1306_command(SSD1306_SETCOMPINS);                    // 0xDA
  ssd1306_command(0x12);
  ssd1306_command(SSD1306_SETCONTRAST);                   // 0x81
  ssd1306_command(0xCF);

  ssd1306_command(SSD1306_SETPRECHARGE);                  // 0xd9
  ssd1306_command(0xF1);
  ssd1306_command(SSD1306_SETVCOMDETECT);                 // 0xDB
  ssd1306_command(0x40);
  ssd1306_command(SSD1306_DISPLAYALLON_RESUME);           // 0xA4
  ssd1306_command(SSD1306_NORMALDISPLAY);                 // 0xA6

  ssd1306_command(SSD1306_DEACTIVATE_SCROLL);

  ssd1306_command(SSD1306_DISPLAYON);//--turn on oled panel
}
