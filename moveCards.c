#include <string.h>
#include "main.h"


void moveToDst(Card *card, char command[]) {
    if(strcmp(srcColoumn,"c1")){

    }
    if(strcmp(srcColoumn,"c2")){

    }
    if(strcmp(srcColoumn,"c3")){

    }
    if(strcmp(srcColoumn,"c4")){

    }
    if(strcmp(srcColoumn,"c5")){

    }
    if(strcmp(srcColoumn,"c6")){

    }
    if(strcmp(srcColoumn,"c7")){

    }
    if(strcmp(srcColoumn,"f1")){

    }
    if(strcmp(srcColoumn,"f2")){

    }
    if(strcmp(srcColoumn,"f3")){

    }
    if(strcmp(srcColoumn,"f4")){

    }
}

void moveCards(char command[]) {
    char srcCard[2];
    char destColumn[2];
    char srcColoumn[2];
    strncpy(destColumn,&command[6],2);
    strncpy(srcCard,&command[2],2);
    strncpy(srcColoumn,command,2);

    if(strcmp(srcColoumn,"c1")){
        char value = srcCard[0];
        char suit = srcCard[1];

        int found = 1;

        Card *current = C1;

        if (!C1) {
            found = 0;
        }

        while (current->suit != suit && current->value != value && found == 1) {
            current = current->next;

            if (current->value == 'X') {
                found = 0;
            }
        }

        if (found = 0) {


        } else {
            moveToDst(current, destColumn);
        }


    }
    if(strcmp(srcColoumn,"c2")){

    }
    if(strcmp(srcColoumn,"c3")){

    }
    if(strcmp(srcColoumn,"c4")){

    }
    if(strcmp(srcColoumn,"c5")){

    }
    if(strcmp(srcColoumn,"c6")){

    }
    if(strcmp(srcColoumn,"c7")){

    }
    if(strcmp(srcColoumn,"f1")){

    }
    if(strcmp(srcColoumn,"f2")){

    }
    if(strcmp(srcColoumn,"f3")){

    }
    if(strcmp(srcColoumn,"f4")){

    }
}
