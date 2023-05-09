#include "linkedlists.h"

void DeleteList(Card* temp)
{
    temp->previous->next = temp->next;
    temp->next->previous = temp->previous;
}