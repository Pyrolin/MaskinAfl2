#include "linkedlists.h"

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