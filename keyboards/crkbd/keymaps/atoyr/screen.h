#ifndef SCREEN_H
#define SCREEN_H

#include "ssd1306.h"

struct ScreenMatrix {
  uint8_t screen[DisplayWidth][MatrixRows];
  bool dirty;
};
typedef struct ScreenMatrix ScreenMatrix;
extern struct ScreenMatrix g_screen;

void screen_clear(ScreenMatrix* screen);
void screen_update(ScreenMatrix *dest, const ScreenMatrix *source);

#endif
