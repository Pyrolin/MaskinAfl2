#include "linkedlists.h"

/**
 * Removes a card form the linked list its in
 * @param temp The card that should be removed
 * @return the card that was removed
 */
Card* DeleteList(Card* temp)
{
    if (temp->next->value == 'X' && temp->previous->value == 'X') {
        temp->previous->previous = temp->next;
        temp->next->next = temp->previous;
    } else {
        temp->previous->next = temp->next;
        temp->next->previous = temp->previous;
    }

    return temp;

}