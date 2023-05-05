#include "linkedlists.h"
#include <stdio.h>

/**
 * Adds a card to the deck
 * @param newCard The card that should be added to the deck
 * @param deck The current last card in the deck, NULL if none
 */
Card AddToDeck(Card *newCard, Card *deck) {
    Card *previous = NULL;

    if (deck != NULL) {
        Card *current = deck;
        while (current != NULL) {
            previous = current;
            current = current->next;
        }

    }

    newCard->next = NULL;
    if (deck != NULL) {
        previous->next = newCard;
    }
    return *newCard;
}
