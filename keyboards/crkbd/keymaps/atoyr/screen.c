#include "screen.h"

#include <string.h>

struct ScreenMatrix g_screen;

void screen_clear(ScreenMatrix* screen) {
  memset(screen->screen, 0, sizeof(screen->screen));
  screen->dirty = true;
}

void screen_update(ScreenMatrix *dest, const ScreenMatrix *source) {
  if (memcmp(dest->screen, source->screen, sizeof(dest->screen))) {
    memcpy(dest->screen, source->screen, sizeof(dest->screen));
    dest->dirty = true;
  }
}

