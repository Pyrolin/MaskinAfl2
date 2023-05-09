#include "dealCards.h"
#include "string.h"

void Play() {
    extern char PHASE[];
    extern char message[];
    extern int isLoaded;
    if (isLoaded) {
        strcpy(PHASE,"PLAY");
        strcpy(message, "OK");
        dealCards();
    } else {
        strcpy(message, "The deck is not yet loaded");
    }

   }
