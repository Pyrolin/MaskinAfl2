#ifndef __LINKED_H__
#define __LINKED_H__
#include <stdio.h>

typedef struct CardType Card;

struct CardType {
    char value;
    char suit;
    Card *next;
};

#endif
