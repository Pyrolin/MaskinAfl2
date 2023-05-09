#include "linkedlists.h"
#include <stdlib.h>

/**
 * Creates a new card struct
 * @param value The value the card should have
 * @param suit The suit the card should have
 * @return the card that was added
 */
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