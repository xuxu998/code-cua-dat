#ifndef __STACK__
#define __STACK__

#include <stdint.h>

#define INT_TYPE_STACK 1
#define DOUBLE_TYPE_STACK 2
#define CHAR_TYPE_STACK 3

#define ACTION_OK 1
#define ACTION_NOT_OK 0

uint8_t PushBack();

#endif