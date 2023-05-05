#ifndef __LINKED_H__
#define __LINKED_H__
#include <stdio.h>

typedef struct CardType Card;

Card *list = NULL;

struct CardType {
    char value;
    char suit;
    struct CardType next;
};

#endif
