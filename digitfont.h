/* 
 * File:   digitfont.h
 * Author: Kazusa
 *
 * Created on 2018/09/09, 20:56
 */

#ifndef DIGITFONT_H
#define	DIGITFONT_H

#define FONT_HEIGHT 16
#define FONT_WIDTH 8
#define FONT_BYTES FONT_HEIGHT * FONT_WIDTH / 8

const uint8_t font_0[FONT_HEIGHT * FONT_WIDTH / 8 * 90] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0xE0,0xE0,0xE0,0xE0,0xC0,0x00,0x03,0x03,0x07,0x07,0x07,0x07,0x03,0xFC,0x3C,0x3C,0x1C,0x1C,0x1C,0x1C,0x3C,0x1F,0x1C,0x1C,0x18,0x18,0x18,0x18,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x48,0x28,0x18,0x0F,0x19,0x10,0x10,0x19,0x0F,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x6C,0x6C,0x3C,0x34,0x20,0x30,0x18,0x0F,0x00,0x00,0x00,0x0C,0x84,0xE8,0x10,0x08,0x0E,0x08,0x10,0xE8,0x10,0x0B,0x04,0x08,0x38,0x08,0x04,0x0B,0x80,0x80,0x80,0x80,0xFF,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x80,0x80,0xC0,0xE0,0xE0,0xF0,0xF8,0xF8,0x00,0x01,0x01,0x03,0x03,0x07,0x0F,0x0F,0x00,0x00,0x08,0x04,0xFE,0x04,0x00,0x00,0x00,0x00,0x10,0x20,0x3F,0x20,0x10,0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0xFE,0x00,0x00,0x00,0x00,0x0D,0x00,0x00,0x0D,0x00,0x18,0x24,0x42,0x42,0x42,0xFE,0x02,0x02,0x00,0x00,0x00,0x00,0x00,0x3F,0x00,0x00,0x80,0x80,0x80,0x80,0xFF,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x00,0x00,0x08,0x04,0xFE,0x04,0x08,0x00,0x00,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x01,0x80,0x80,0xC0,0xA0,0x80,0x80,0x80,0x80,0x00,0x00,0x01,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x1B,0x1B,0x00,0x00,0x00,0x00,0x13,0x0F,0x00,0x13,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0xFC,0x16,0x10,0xFC,0x16,0x00,0x00,0x3C,0x0F,0x04,0x3C,0x0F,0x04,0x00,0x00,0x18,0x24,0x64,0xFE,0x84,0x8C,0x00,0x00,0x06,0x0C,0x08,0x3F,0x18,0x08,0x07,0x3C,0x42,0x42,0xBC,0xE0,0x18,0x06,0x00,0x00,0x30,0x0C,0x03,0x1E,0x21,0x21,0x1E,0x00,0x18,0xE4,0xC4,0xA4,0x18,0x80,0x00,0x00,0x07,0x08,0x08,0x09,0x0E,0x0F,0x00,0x00,0x13,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x1C,0x06,0x00,0x00,0x00,0x00,0x00,0x07,0x1C,0x30,0x00,0x00,0x00,0x00,0x02,0x04,0x18,0xE0,0x00,0x00,0x00,0x00,0x20,0x10,0x0C,0x03,0x00,0x00,0x00,0x20,0x40,0xF8,0xB8,0x40,0x20,0x00,0x00,0x03,0x01,0x07,0x07,0x01,0x03,0x00,0x00,0x80,0x80,0xF8,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x3C,0x04,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x60,0x18,0x06,0x00,0x20,0x18,0x06,0x01,0x00,0x00,0x00,0x00,0x00,0xF0,0x0C,0x84,0x64,0x1C,0xF0,0x00,0x00,0x03,0x0E,0x09,0x08,0x0C,0x03,0x00,0x00,0x00,0x08,0x0C,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x18,0x04,0x84,0x84,0x44,0x38,0x00,0x08,0x0E,0x0B,0x09,0x08,0x08,0x08,0x00,0x00,0x08,0x0C,0x44,0x44,0x44,0xB8,0x00,0x00,0x04,0x08,0x08,0x08,0x08,0x0C,0x07,0x00,0x80,0x60,0x30,0x0C,0xFC,0x00,0x00,0x03,0x03,0x02,0x02,0x02,0x0F,0x02,0x02,0x00,0xC0,0xFC,0x24,0x24,0x64,0xE4,0xC0,0x00,0x04,0x0C,0x08,0x08,0x08,0x04,0x03,0x00,0xF0,0xC8,0x44,0x44,0xC4,0x88,0x00,0x00,0x03,0x0C,0x08,0x08,0x0C,0x07,0x00,0x00,0x04,0x04,0x04,0xC4,0x7C,0x0C,0x00,0x00,0x00,0x00,0x0E,0x03,0x00,0x00,0x00,0x00,0xB8,0xC4,0x44,0x44,0xC4,0xB8,0x00,0x00,0x07,0x0C,0x08,0x08,0x0C,0x07,0x00,0x00,0xF0,0x8C,0x04,0x04,0x8C,0xF0,0x00,0x00,0x04,0x0D,0x09,0x09,0x04,0x03,0x00,0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x0C,0x00,0x00,0x00,0x00,0xC0,0x60,0x30,0x18,0x08,0x04,0x00,0x00,0x00,0x01,0x02,0x04,0x08,0x10,0x00,0x00,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x04,0x08,0x18,0x30,0x60,0xC0,0x00,0x00,0x10,0x08,0x04,0x02,0x01,0x00,0x00,0x00,0x1C,0x06,0x02,0xC2,0x62,0x1C,0x00,0x00,0x00,0x00,0x1B,0x1B,0x00,0x00,0x00,0xE0,0x18,0xE4,0x14,0x14,0xF4,0x08,0xF0,0x07,0x0C,0x13,0x12,0x13,0x13,0x0A,0x01,0x00,0x00,0xF0,0x1C,0x1C,0xF0,0x00,0x00,0x08,0x0F,0x01,0x01,0x01,0x01,0x0F,0x08,0x00,0xFC,0x44,0x44,0x44,0xA8,0x38,0x00,0x00,0x0F,0x08,0x08,0x08,0x0C,0x07,0x00,0x00,0xF0,0x08,0x04,0x04,0x0C,0x18,0x00,0x00,0x03,0x04,0x08,0x08,0x0C,0x06,0x00,0x04,0xFC,0x04,0x04,0x04,0x08,0xF0,0x00,0x08,0x0F,0x08,0x08,0x08,0x06,0x03,0x00,0x00,0xFC,0x44,0x44,0x44,0x44,0x04,0x00,0x00,0x0F,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0xFC,0x44,0x44,0x44,0x44,0x04,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x08,0x04,0x04,0x84,0x98,0x90,0x00,0x03,0x04,0x08,0x08,0x08,0x06,0x0F,0x00,0x00,0xFC,0x40,0x40,0x40,0x40,0xFC,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x04,0xFC,0x04,0x04,0x00,0x00,0x00,0x00,0x08,0x0F,0x08,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x06,0x08,0x08,0x08,0x07,0x00,0x00,0x00,0xFC,0xC0,0x60,0x98,0x0C,0x00,0x00,0x00,0x0F,0x00,0x00,0x01,0x0E,0x08,0x00,0x00,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0xFC,0xFC,0x00,0x80,0x7C,0xFC,0x00,0x00,0x0F,0x00,0x0F,0x0F,0x00,0x0F,0x00,0x00,0xFC,0x1C,0x70,0x80,0x00,0xFC,0x00,0x00,0x0F,0x00,0x00,0x01,0x0E,0x0F,0x00,0x00,0xF0,0x0C,0x04,0x04,0x08,0xF0,0x00,0x00,0x03,0x04,0x08,0x08,0x04,0x03,0x00,0x00,0xFC,0x84,0x84,0x84,0xCC,0x78,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x08,0x04,0x04,0x08,0xF0,0x00,0x00,0x03,0x04,0x08,0x0E,0x1C,0x03,0x00,0x00,0xFC,0x44,0x44,0xC4,0x64,0x38,0x00,0x00,0x0F,0x00,0x00,0x01,0x0F,0x08,0x00,0x00,0x38,0x64,0x44,0x84,0x8C,0x08,0x00,0x00,0x06,0x0C,0x08,0x08,0x08,0x07,0x00,0x00,0x04,0x04,0xFC,0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x00,0xFC,0x00,0x00,0x07,0x0C,0x08,0x08,0x0C,0x07,0x00,0x00,0x3C,0xF0,0x00,0x00,0xF0,0x3C,0x00,0x00,0x00,0x01,0x0F,0x0F,0x03,0x00,0x00,0x04,0xFC,0x00,0xFC,0xFC,0x00,0xFC,0x04,0x00,0x07,0x0F,0x00,0x00,0x0F,0x07,0x00,0x00,0x04,0x1C,0xF0,0xF0,0x1C,0x04,0x00,0x00,0x0C,0x07,0x01,0x01,0x07,0x0C,0x00,0x04,0x1C,0x70,0x80,0x70,0x1C,0x04,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00};

#endif	/* DIGITFONT_H */

