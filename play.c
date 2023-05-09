#include "dealCards.h"
#include "string.h"

/**
 * Sets the phase to PLAY
 */
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
