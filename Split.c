#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "linkedlists.h"
#include "AddToDeck.c"
#define MAX_CARDS 52

void shuffle(int deck[], int size, int split){
    if (split <= 0 split >= size){
        srand(time(NULL));
        split =rand() % (size -1) +1;
    }
    // den splitter kort deckne til to deck.
    int pile1[split];
    int pile2[size-split];
    for (int i = 0; i <split; i++){
        pile1[i] = deck[i];
    }
    for (int i = split; i <size; i++){
        pile2[i - split] = deck[i];
    }
}

void splitDeck(Card *card, int split) {
// list points to the head of a linked list of Flights
    int count = 1;

    Card **deck1 = NULL;
    Card **deck2 = NULL;

    while (card != NULL) { // while not at the end
        if (count < split) {
            **deck1 = AddToDeck(card, deck1);
        } else {
            **deck2 = AddToDeck(card, deck2);
        }

        count = count + 1;
        card = card->next; // move to next node
    }


}
