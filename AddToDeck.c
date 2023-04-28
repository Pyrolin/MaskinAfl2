int AddToDeck(Card newCard, Card **deck) {
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
    return 0;
}
