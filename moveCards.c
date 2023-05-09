#include <string.h>
#include "linkedlists.h"
#include "delete.h"
#include "addToDeck.h"

void moveFromTo(Card *card1, Card *card2) {
    Card *nextCard = card1->next;
    DeleteList(card1);

    while (card1->suit != 'X') {
        AddToDeck(card1, card2);
        card1 = nextCard;
        DeleteList(card1);
        nextCard = card1->next;
    }

}
char getPreviousValue(char value){
    switch (value) {
        case 'K':{
            return 'Q';
        }
        case 'Q':{
            return 'J';
        }
        case 'J':{
            return 'T';
        }
        case 'T':{
            return '9';
        }
        case '9':{
            return '8';
        }
        case '8':{
            return '7';
        }
        case '7':{
            return '6';
        }
        case '6':{
            return '5';
        }
        case '5':{
            return '4';
        }
        case '4':{
            return '3';
        }
        case '3':{
            return '2';
        }
        case '2':{
            return 'A';
        }
        case 'A':{
            return 'X';
        }
        default:{
            return 'X';
        }
    }
}

char getNextValue(char value) {
    switch (value) {
        case 'A': {
            return '2';
        }
        case '2': {
            return '3';
        }
        case '3':{
            return '4';
        }
        case '4':{
            return '5';
        }
        case '5': {
            return '6';
        }
        case '6': {
            return '7';
        }
        case '7':{
            return '8';
        }
        case '8':{
            return '9';
        }
        case '9':{
            return 'T';
        }
        case 'T':{
            return 'J';
        }
        case 'J':{
            return 'Q';
        }
        case 'Q':{
            return 'K';
        }
        case 'K':{
            return 'X';
        }
        default: {
            return 'X';
        }
    }
}

void moveToDst(Card *card, char destColumn[]) {

    extern Card* C1;
    extern Card* C2;
    extern Card* C3;
    extern Card* C4;
    extern Card* C5;
    extern Card* C6;
    extern Card* C7;

    extern Card* F1;
    extern Card* F2;
    extern Card* F3;
    extern Card* F4;


    extern char message[];

    if(destColumn[0] == 'c' && destColumn[1] == '1'){

        Card* lastCard = C1->previous->previous;

        if (getNextValue(card->value) == lastCard->value) {
            moveFromTo(card, lastCard);
        }

    }
    if(strcmp(destColumn,"c2")){

    }
    if(strcmp(destColumn,"c3")){

    }
    if(strcmp(destColumn,"c4")){

    }
    if(strcmp(destColumn,"c5")){

    }
    if(strcmp(destColumn,"c6")){

    }
    if(strcmp(destColumn,"c7")){

    }
    if(strcmp(destColumn,"f1")){

    }
    if(strcmp(destColumn,"f2")){

    }
    if(strcmp(destColumn,"f3")){

    }
    if(strcmp(destColumn,"f4")){

    }

}

void moveCards(char command[]) {

    extern Card* C1;
    extern Card* C2;
    extern Card* C3;
    extern Card* C4;
    extern Card* C5;
    extern Card* C6;
    extern Card* C7;

    extern Card* F1;
    extern Card* F2;
    extern Card* F3;
    extern Card* F4;


    extern char message[];

    char srcCard[2];
    char destColumn[2];
    char srcColoumn[2];
    strncpy(destColumn,&command[7],2);
    strncpy(srcCard,&command[3],2);
    strncpy(srcColoumn,command,2);

    if(srcColoumn[0] == 'c' && srcColoumn[1] == '1'){
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

        if (!found) {
            strcpy(message,"This move is not valid");

        } else {
            moveToDst(current, destColumn);
        }


    }
    if(srcColoumn[0] == 'c' && srcColoumn[1] == '2'){
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

        if (!found) {
            strcpy(message,"This move is not valid");

        } else {
            moveToDst(current, destColumn);
        }


    }
    if(srcColoumn[0] == 'c' && srcColoumn[1] == '3'){
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

        if (!found) {
            strcpy(message,"This move is not valid");

        } else {
            moveToDst(current, destColumn);
        }


    }
    if(srcColoumn[0] == 'c' && srcColoumn[1] == '4'){
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

        if (!found) {
            strcpy(message,"This move is not valid");

        } else {
            moveToDst(current, destColumn);
        }


    }
    if(srcColoumn[0] == 'c' && srcColoumn[1] == '5'){
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

        if (!found) {
            strcpy(message,"This move is not valid");

        } else {
            moveToDst(current, destColumn);
        }


    }
    if(srcColoumn[0] == 'c' && srcColoumn[1] == '6'){
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

        if (!found) {
            strcpy(message,"This move is not valid");

        } else {
            moveToDst(current, destColumn);
        }


    }
    if(srcColoumn[0] == 'c' && srcColoumn[1] == '7'){
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

        if (!found) {
            strcpy(message,"This move is not valid");

        } else {
            moveToDst(current, destColumn);
        }


    }
    if(srcColoumn[0] == 'f' && srcColoumn[1] == '1'){
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

        if (!found) {
            strcpy(message,"This move is not valid");

        } else {
            moveToDst(current, destColumn);
        }


    }
    if(srcColoumn[0] == 'f' && srcColoumn[1] == '2'){
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

        if (!found) {
            strcpy(message,"This move is not valid");

        } else {
            moveToDst(current, destColumn);
        }


    }
    if(srcColoumn[0] == 'f' && srcColoumn[1] == '3'){
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

        if (!found) {
            strcpy(message,"This move is not valid");

        } else {
            moveToDst(current, destColumn);
        }


    }
    if(srcColoumn[0] == 'f' && srcColoumn[1] == '4'){
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

        if (!found) {
            strcpy(message,"This move is not valid");

        } else {
            moveToDst(current, destColumn);
        }


    }
}
