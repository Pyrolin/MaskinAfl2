#include "linkedlists.h"
#include <malloc.h>

Card * CreateCard(char value, char suit) {
    Card *newCard;
// allocate a new node
    newCard = (Card*)malloc(sizeof(Card));
// initialize node data
    newCard->value = value;
    newCard->suit = suit;
// initialize pointer
    newCard->next = NULL;

    return newCard;
}