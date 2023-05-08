#include<stdio.h>
#include<conio.h>
#include "linkedlists.c"
#include "main.h"
#include "dealCards.c"
#include "view.c"

int load()
{
    FILE *fh;
    char line[4];
    fh = fopen("..\\kort.txt", "r");
    if (fh != NULL)
    {
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
        dealCards();
        printBoard("test");
        //Printdeck(firstCard);
    }
    else printf("Error opening file\n");

    return 0;
}

