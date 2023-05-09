#include <string.h>
#include "linkedlists.h"
#include "delete.h"
#include "addToDeck.h"

/**
 * Moves a card from one column/foundation to another
 * @param card1 The card that should be moved from
 * @param card2 The card that should be moved to
 * @return the card that was moved
 */
Card *moveFromTo(Card *card1, Card *card2) {
    Card *nextCard = card1->next;
    DeleteList(card1);
    Card* card = NULL;
    extern char message[];

    while (card1->suit != 'X') {
        card = AddToDeck(card1, card2);
        card2 = card1;
        card1 = nextCard;
        if (card1->suit == 'X') {
            break;
        }
        DeleteList(card1);
        nextCard = card1->next;
    }
    strcpy(message,"OK");
    return card;

}

/**
 * Gets the previous value of a card value (kinda like value -1)
 * @param value The start value
 * @return The value one bellow the start value
 */
char getPrevValue(char value){
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

/**
 * Gets the next value of a card value (kinda like value +1)
 * @param value The start value
 * @return The value one above the start value
 */
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

/**
 * Determines where a card should be moved to and if its possible
 * @param card The card that should be moved
 * @param destColumn The column the card should be moved to
 */
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
            if (lastCard->value == 'X') {
                C1 = moveFromTo(card, lastCard);
            } else {
                moveFromTo(card, lastCard);
            }
        } else {
            strcpy(message,"This move is not valid");
        }

    } else if(destColumn[0] == 'c' && destColumn[1] == '2'){

        Card* lastCard = C2->previous->previous;

        if (getNextValue(card->value) == lastCard->value) {
            if (lastCard->value == 'X') {
                C2 = moveFromTo(card, lastCard);
            } else {
                moveFromTo(card, lastCard);
            }
        } else {
            strcpy(message,"This move is not valid");
        }

    } else if(destColumn[0] == 'c' && destColumn[1] == '3'){

        Card* lastCard = C3->previous->previous;

        if (getNextValue(card->value) == lastCard->value) {
            if (lastCard->value == 'X') {
                C3 = moveFromTo(card, lastCard);
            } else {
                moveFromTo(card, lastCard);
            }
        } else {
            strcpy(message,"This move is not valid");
        }

    } else if(destColumn[0] == 'c' && destColumn[1] == '4'){

        Card* lastCard = C4->previous->previous;

        if (getNextValue(card->value) == lastCard->value) {
            if (lastCard->value == 'X') {
                C4 = moveFromTo(card, lastCard);
            } else {
                moveFromTo(card, lastCard);
            }
        } else {
            strcpy(message,"This move is not valid");
        }

    } else if(destColumn[0] == 'c' && destColumn[1] == '5'){

        Card* lastCard = C5->previous->previous;

        if (getNextValue(card->value) == lastCard->value) {
            if (lastCard->value == 'X') {
                C5 = moveFromTo(card, lastCard);
            } else {
                moveFromTo(card, lastCard);
            }
        } else {
            strcpy(message,"This move is not valid");
        }

    } else if(destColumn[0] == 'c' && destColumn[1] == '6'){

        Card* lastCard = C6->previous->previous;

        if (getNextValue(card->value) == lastCard->value) {
            if (lastCard->value == 'X') {
                C6 = moveFromTo(card, lastCard);
            } else {
                moveFromTo(card, lastCard);
            }
        } else {
            strcpy(message,"This move is not valid");
        }

    } else if(destColumn[0] == 'c' && destColumn[1] == '7'){

        Card* lastCard = C7->previous->previous;

        if (getNextValue(card->value) == lastCard->value) {
            if (lastCard->value == 'X') {
                C7 = moveFromTo(card, lastCard);
            } else {
                moveFromTo(card, lastCard);
            }
        } else {
            strcpy(message,"This move is not valid");
        }

    }


    if(destColumn[0] == 'f' && destColumn[1] == '1'){

        Card* lastCard = F1->previous->previous;

        if (getPrevValue(card->value) == lastCard->value) {
            if (lastCard->value == 'X') {
                F1 = moveFromTo(card, lastCard);
            } else {
                moveFromTo(card, lastCard);
            }
        } else {
            strcpy(message,"This move is not valid");
        }
    } else if(destColumn[0] == 'f' && destColumn[1] == '2'){

        Card* lastCard = F2->previous->previous;

        if (getPrevValue(card->value) == lastCard->value) {
            if (lastCard->value == 'X') {
                F2 = moveFromTo(card, lastCard);
            } else {
                moveFromTo(card, lastCard);
            }
        } else {
            strcpy(message,"This move is not valid");
        }
    } else if(destColumn[0] == 'f' && destColumn[1] == '3'){

        Card* lastCard = F3->previous->previous;

        if (getPrevValue(card->value) == lastCard->value) {
            if (lastCard->value == 'X') {
                F3 = moveFromTo(card, lastCard);
            } else {
                moveFromTo(card, lastCard);
            }
        } else {
            strcpy(message,"This move is not valid");
        }
    } else if(destColumn[0] == 'f' && destColumn[1] == '4'){

        Card* lastCard = F4->previous->previous;

        if (getPrevValue(card->value) == lastCard->value) {
            if (lastCard->value == 'X') {
                F4 = moveFromTo(card, lastCard);
            } else {
                moveFromTo(card, lastCard);
            }
        } else {
            strcpy(message,"This move is not valid");
        }
    } else {
        strcpy(message,"This move is not valid");
    }

}

/**
 * Determines what card should be moved
 * @param command The move command, with the column that the card should be moved from
 */
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

        while ((current->suit != suit || current->value != value) && found == 1) {
            current = current->next;

            if (current->value == 'X') {
                found = 0;
            }
        }

        if (!found) {
            strcpy(message,"This move is not valid");

        } else {
            if (current->next->suit == 'X' && current->previous->suit == 'X') {
                C1 = current->next;
            }
            moveToDst(current, destColumn);
        }


    } else if(srcColoumn[0] == 'c' && srcColoumn[1] == '2'){
        char value = srcCard[0];
        char suit = srcCard[1];

        int found = 1;

        Card *current =C2;

        if (!C2) {
            found = 0;
        }

        while ((current->suit != suit || current->value != value) && found == 1) {
            current = current->next;

            if (current->value == 'X') {
                found = 0;
            }
        }

        if (!found) {
            strcpy(message,"This move is not valid");

        } else {
            if (current->next->suit == 'X' && current->previous->suit == 'X') {
                C2 = current->next;
            }
            moveToDst(current, destColumn);
        }


    } else if(srcColoumn[0] == 'c' && srcColoumn[1] == '3'){
        char value = srcCard[0];
        char suit = srcCard[1];

        int found = 1;

        Card *current =C3;

        if (!C3) {
            found = 0;
        }

        while ((current->suit != suit || current->value != value) && found == 1) {
            current = current->next;

            if (current->value == 'X') {
                found = 0;
            }
        }

        if (!found) {
            strcpy(message,"This move is not valid");

        } else {
            if (current->next->suit == 'X' && current->previous->suit == 'X') {
                C3 = current->next;
            }
            moveToDst(current, destColumn);
        }


    } else if(srcColoumn[0] == 'c' && srcColoumn[1] == '4'){
        char value = srcCard[0];
        char suit = srcCard[1];

        int found = 1;

        Card *current =C4;

        if (!C4) {
            found = 0;
        }

        while ((current->suit != suit || current->value != value) && found == 1) {
            current = current->next;

            if (current->value == 'X') {
                found = 0;
            }
        }

        if (!found) {
            strcpy(message,"This move is not valid");

        } else {
            if (current->next->suit == 'X' && current->previous->suit == 'X') {
                C4 = current->next;
            }
            moveToDst(current, destColumn);
        }


    } else if(srcColoumn[0] == 'c' && srcColoumn[1] == '5'){
        char value = srcCard[0];
        char suit = srcCard[1];

        int found = 1;

        Card *current =C5;

        if (!C5) {
            found = 0;
        }

        while ((current->suit != suit || current->value != value) && found == 1) {
            current = current->next;

            if (current->value == 'X') {
                found = 0;
            }
        }

        if (!found) {
            strcpy(message,"This move is not valid");

        } else {
            if (current->next->suit == 'X' && current->previous->suit == 'X') {
                C5 = current->next;
            }
            moveToDst(current, destColumn);
        }


    } else if(srcColoumn[0] == 'c' && srcColoumn[1] == '6'){
        char value = srcCard[0];
        char suit = srcCard[1];

        int found = 1;

        Card *current =C6;

        if (!C6) {
            found = 0;
        }

        while ((current->suit != suit || current->value != value) && found == 1) {
            current = current->next;

            if (current->value == 'X') {
                found = 0;
            }
        }

        if (!found) {
            strcpy(message,"This move is not valid");

        } else {
            if (current->next->suit == 'X' && current->previous->suit == 'X') {
                C6 = current->next;
            }
            moveToDst(current, destColumn);
        }


    } else if(srcColoumn[0] == 'c' && srcColoumn[1] == '7'){
        char value = srcCard[0];
        char suit = srcCard[1];

        int found = 1;

        Card *current =C7;

        if (!C7) {
            found = 0;
        }

        while ((current->suit != suit || current->value != value) && found == 1) {
            current = current->next;

            if (current->value == 'X') {
                found = 0;
            }
        }

        if (!found) {
            strcpy(message,"This move is not valid");

        } else {
            if (current->next->suit == 'X' && current->previous->suit == 'X') {
                C7 = current->next;
            }
            moveToDst(current, destColumn);
        }


    } else if(srcColoumn[0] == 'f' && srcColoumn[1] == '1'){
        char value = srcCard[0];
        char suit = srcCard[1];

        int found = 1;

        Card *current =F1;

        if (!F1) {
            found = 0;
        }

        while ((current->suit != suit || current->value != value) && found == 1) {
            current = current->next;

            if (current->value == 'X') {
                found = 0;
            }
        }

        if (!found) {
            strcpy(message,"This move is not valid");

        } else {
            if (current->next->suit == 'X' && current->previous->suit == 'X') {
                F1 = current->next;
            }
            moveToDst(current, destColumn);
        }


    } else if(srcColoumn[0] == 'f' && srcColoumn[1] == '2'){
        char value = srcCard[0];
        char suit = srcCard[1];

        int found = 1;

        Card *current =F2;

        if (!F2) {
            found = 0;
        }

        while ((current->suit != suit || current->value != value) && found == 1) {
            current = current->next;

            if (current->value == 'X') {
                found = 0;
            }
        }

        if (!found) {
            strcpy(message,"This move is not valid");

        } else {
            if (current->next->suit == 'X' && current->previous->suit == 'X') {
                F2 = current->next;
            }
            moveToDst(current, destColumn);
        }


    } else if(srcColoumn[0] == 'f' && srcColoumn[1] == '3'){
        char value = srcCard[0];
        char suit = srcCard[1];

        int found = 1;

        Card *current =F3;

        if (!F3) {
            found = 0;
        }

        while ((current->suit != suit || current->value != value) && found == 1) {
            current = current->next;

            if (current->value == 'X') {
                found = 0;
            }
        }

        if (!found) {
            strcpy(message,"This move is not valid");

        } else {
            if (current->next->suit == 'X' && current->previous->suit == 'X') {
                F3 = current->next;
            }
            moveToDst(current, destColumn);
        }


    } else if(srcColoumn[0] == 'f' && srcColoumn[1] == '4'){
        char value = srcCard[0];
        char suit = srcCard[1];

        int found = 1;

        Card *current =F4;

        if (!F4) {
            found = 0;
        }

        while ((current->suit != suit || current->value != value) && found == 1) {
            current = current->next;

            if (current->value == 'X') {
                found = 0;
            }
        }

        if (!found) {
            strcpy(message,"This move is not valid");

        } else {
            if (current->next->suit == 'X' && current->previous->suit == 'X') {
                F4 = current->next;
            }
            moveToDst(current, destColumn);
        }
    } else {
        strcpy(message,"This move is not valid");
    }
}
