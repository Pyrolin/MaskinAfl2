#include "linkedlists.h"
#include <stdio.h>

/**
 * Adds a card to the deck
 * @param newCard The card that should be added to the deck
 * @param deck The current last card in the deck, NULL if none
 */
void AddToDeck(Card *newCard, Card **deck) {
    Card *previous = NULL;
    Card *current = *deck;

    while (current != NULL) {
        previous = current;
        current = current->next;
    }

    newCard->next = NULL;
    if (previous == NULL) {
        *deck = newCard;
    } else {
        previous->next = newCard;
    }
}
