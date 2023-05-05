#include<stdio.h>
#include<conio.h>
#include "linkedlists.h"
#include "linkedlists.c"
#include "view.c"
#include "addToDeck.c"

int Load()
{
    FILE *fh;
    char line[4];
    fh = fopen("..\\kort.txt", "r");
    if (fh != NULL)
    {
        Card *firstCard = NULL;
        Card *prevCard = NULL;

        while (fgets(line, 4, fh)) {
            if (firstCard == NULL) {
                firstCard = CreateCard(line[0], line[1]);
                AddToDeck(firstCard, NULL);
                prevCard = firstCard;

            } else {

                Card *thisCard = CreateCard(line[0], line[1]);
                AddToDeck(thisCard, prevCard);
                prevCard = thisCard;

            }
        }

        fclose(fh);
        Printdeck(firstCard);
    }
    else printf("Error opening file\n");

    return 0;
}

