#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "linkedlists.h"

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

void splitDeck(Card *list, int split) {
// list points to the head of a linked list of Flights
    int count = 1;

    Card **deck1 = newDeck();
    Card **deck2 = newDeck();

    while (list != NULL) { // while not at the end
        if (count < split) {
            **deck1 = addToDeck(**deck1, list->suit, list->value);
        } else {
            **deck2 = addToDeck(**deck2, list->suit, list->value);
        }

        count = count + 1;
        list = list->next; // move to next node
    }

    while (*deck1 != NULL && *deck2 != NULL) {
        if (*deck1 != NULL ) {

        }
    }


}
