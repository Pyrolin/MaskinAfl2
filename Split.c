#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
