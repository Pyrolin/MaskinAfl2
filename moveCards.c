#include <string.h>
#include "main.h"


void moveToDst(Card *card, char command[]) {
    /*
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
     */
}

void moveCards(char command[]) {

    extern Card* C1;
    extern Card* C2;
    extern Card* C3;
    extern Card* C4;
    extern Card* C5;
    extern Card* C6;
    extern Card* C7;

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
            strcpy(message,"This move is not valid");

        } else {
            moveToDst(current, destColumn);
        }


    }
    if(strcmp(srcColoumn,"c2")){
        char value = srcCard[0];
        char suit = srcCard[1];

        int found = 1;

        Card *current =C2;

        if (!C2) {
            found = 0;
        }

        while (current->suit != suit && current->value != value && found == 1) {
            current = current->next;

            if (current->value == 'X') {
                found = 0;
            }
        }

        if (found = 0) {
            strcpy(message,"This move is not valid");

        } else {
            moveToDst(current, destColumn);
        }


    }
    if(strcmp(srcColoumn,"c3")){
        char value = srcCard[0];
        char suit = srcCard[1];

        int found = 1;

        Card *current =C3;

        if (!C3) {
            found = 0;
        }

        while (current->suit != suit && current->value != value && found == 1) {
            current = current->next;

            if (current->value == 'X') {
                found = 0;
            }
        }

        if (found = 0) {
            strcpy(message,"This move is not valid");

        } else {
            moveToDst(current, destColumn);
        }


    }
    if(strcmp(srcColoumn,"c4")){
        char value = srcCard[0];
        char suit = srcCard[1];

        int found = 1;

        Card *current =C4;

        if (!C4) {
            found = 0;
        }

        while (current->suit != suit && current->value != value && found == 1) {
            current = current->next;

            if (current->value == 'X') {
                found = 0;
            }
        }

        if (found = 0) {
            strcpy(message,"This move is not valid");

        } else {
            moveToDst(current, destColumn);
        }


    }
    if(strcmp(srcColoumn,"c5")){
        char value = srcCard[0];
        char suit = srcCard[1];

        int found = 1;

        Card *current =C5;

        if (!C5) {
            found = 0;
        }

        while (current->suit != suit && current->value != value && found == 1) {
            current = current->next;

            if (current->value == 'X') {
                found = 0;
            }
        }

        if (found = 0) {
            strcpy(message,"This move is not valid");

        } else {
            moveToDst(current, destColumn);
        }


    }
    if(strcmp(srcColoumn,"c6")){
        char value = srcCard[0];
        char suit = srcCard[1];

        int found = 1;

        Card *current =C6;

        if (!C6) {
            found = 0;
        }

        while (current->suit != suit && current->value != value && found == 1) {
            current = current->next;

            if (current->value == 'X') {
                found = 0;
            }
        }

        if (found = 0) {
            strcpy(message,"This move is not valid");

        } else {
            moveToDst(current, destColumn);
        }


    }
    if(strcmp(srcColoumn,"c7")){
        char value = srcCard[0];
        char suit = srcCard[1];

        int found = 1;

        Card *current =C7;

        if (!C7) {
            found = 0;
        }

        while (current->suit != suit && current->value != value && found == 1) {
            current = current->next;

            if (current->value == 'X') {
                found = 0;
            }
        }

        if (found = 0) {
            strcpy(message,"This move is not valid");

        } else {
            moveToDst(current, destColumn);
        }


    }
    if(strcmp(srcColoumn,"f1")){
        char value = srcCard[0];
        char suit = srcCard[1];

        int found = 1;

        Card *current =F1;

        if (!F1) {
            found = 0;
        }

        while (current->suit != suit && current->value != value && found == 1) {
            current = current->next;

            if (current->value == 'X') {
                found = 0;
            }
        }

        if (found = 0) {
            strcpy(message,"This move is not valid");

        } else {
            moveToDst(current, destColumn);
        }


    }
    if(strcmp(srcColoumn,"f2")){
        char value = srcCard[0];
        char suit = srcCard[1];

        int found = 1;

        Card *current =F2;

        if (!F2) {
            found = 0;
        }

        while (current->suit != suit && current->value != value && found == 1) {
            current = current->next;

            if (current->value == 'X') {
                found = 0;
            }
        }

        if (found = 0) {
            strcpy(message,"This move is not valid");

        } else {
            moveToDst(current, destColumn);
        }


    }
    if(strcmp(srcColoumn,"f3")){
        char value = srcCard[0];
        char suit = srcCard[1];

        int found = 1;

        Card *current =F3;

        if (!F3) {
            found = 0;
        }

        while (current->suit != suit && current->value != value && found == 1) {
            current = current->next;

            if (current->value == 'X') {
                found = 0;
            }
        }

        if (found = 0) {
            strcpy(message,"This move is not valid");

        } else {
            moveToDst(current, destColumn);
        }


    }
    if(strcmp(srcColoumn,"f4")){
        char value = srcCard[0];
        char suit = srcCard[1];

        int found = 1;

        Card *current =F4;

        if (!F4) {
            found = 0;
        }

        while (current->suit != suit && current->value != value && found == 1) {
            current = current->next;

            if (current->value == 'X') {
                found = 0;
            }
        }

        if (found = 0) {
            strcpy(message,"This move is not valid");

        } else {
            moveToDst(current, destColumn);
        }


    }
}
