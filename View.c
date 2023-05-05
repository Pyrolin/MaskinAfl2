#include "linkedlists.h"
#include <stdio.h>

void Printdeck(Card *list){
    // list points to the head of a linked list of cards
    int count = 1;
    printf("cards on the fields");
    while (list != NULL) {
        printf("cards: %d\n", count);

        count = count + 1;
        list = list ->next; // move to next node
    }
    printf("\n\n");
}
