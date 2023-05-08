#include "linkedlists.h"
#include <stdio.h>

/**
 * Adds a card to the deck
 * @param newCard The card that should be added to the deck
 * @param card The current last card in the deck, NULL if none
 */
Card* AddToDeck(Card *newCard, Card *card) {
    Card *dummy = NULL;

    if (card != NULL) {
        dummy = card->next;
        card->next = newCard;
        newCard->previous = card;
    } else {
        dummy = CreateCard('X','X');

        newCard->previous = dummy;
        dummy->next = newCard;
    }

    dummy->previous = newCard;
    newCard->next = dummy;
    return newCard;
}
