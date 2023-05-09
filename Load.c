#include<stdio.h>
#include<conio.h>
#include <string.h>
#include "linkedlists.h"
#include "addToDeck.h"

void load() {
    FILE *fh;
    char line[4];
    fh = fopen("..\\kort.txt", "r");
    extern Card* deck;
    extern int isLoaded;
    extern char message[];
    if (fh != NULL && !isLoaded) {
        //Card *firstCard = NULL;
        Card *prevCard = NULL;

        while (fgets(line, 4, fh)) {
            if (!deck) {
                deck = CreateCard(line[0], line[1]);
                AddToDeck(deck, NULL);
                prevCard = deck;

            } else {

                Card *thisCard = CreateCard(line[0], line[1]);
                AddToDeck(thisCard, prevCard);
                prevCard = thisCard;
            }
        }

        fclose(fh);
        strcpy(message, "OK");
    } else {
        strcpy(message, "Error opening file");
    }

    isLoaded = 1;

}

