#include <stdio.h>
#include "Linkedlists.h"

void DeleteList(Card* temp)
{
    while(temp->next->next!=NULL)
    {
        temp= temp->next ;
    }
    temp->next= NULL;
}