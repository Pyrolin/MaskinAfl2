#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__
#include <stdio.h>


typedef struct CardType Card;

struct CardType {
    char value;
    char suit;
    Card *next;
    Card *previous;
};

#endif
