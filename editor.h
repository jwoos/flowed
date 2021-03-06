#ifndef FLOWED_EDITOR_H
#define FLOWED_EDITOR_H


#include <stdbool.h>
#include <stdlib.h>

#include "vendor/termbox/termbox.h"

#include "global.h"
#include "utils.h"


void initTermbox(void);

struct tb_event pollEvent(void);

struct tb_event peekEvent(uint32_t);

void moveCursor(uint16_t);

void showLetter(uint32_t);

void newLine(void);


#endif
