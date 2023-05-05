#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "linkedlists.h"
#include "AddToDeck.c"
#define MAX_CARDS 52

void shuffleDeck(Card **card1, Card **card2) {
Card *lastNode = card1;
while (lastNode->next != NULL) {
    lastNode = lastNode->next;
}
lastNode->next = *card2;

int length = 0;
        for (Card *node = card1; node != NULL; node = node->next) {
            length++;
        }
        for (Card *node1 = card1; node1 != NULL; node1 = node1->next) {
            int randIndex = rand() % length;
            Card *node2 = card1;
            for (int i = 0; i < randIndex; i++) {
                node2 = node2->next;
            }
            Card temp = *node1;
            *node1 = *node2;
            *node2 = temp;
        }
}

void splitAndShuffleDeck(Card *card, int split) {
    Card *deck1 = NULL;
    Card *deck2 = NULL;

    int count =1;
    while (card != NULL) {
        Card *newNode = (Card*)malloc(sizeof(Card));
        newNode->value = card->value;
        newNode->suit = card->suit;
        newNode->next = NULL;

        if (count <= split) {
            AddToDeck(newNode, &deck1);
        } else {
            AddToDeck(newNode, &deck2);
        }
        count++;
        card = card->next;
    }
    shuffleDeck(deck1, deck2);

    for (Card *node = deck1; node != NULL; node =node->next){
        printf("%c of %c>'\n", node->value, node->suit);
    }
}



void splitDeck(Card *card, int split) {
// list points to the head of a linked list of Flights
    int count = 1;

    Card **deck1 = NULL;
    Card **deck2 = NULL;

    while (card != NULL) { // while not at the end
        if (count < split) {
            **deck1 = AddToDeck(card, deck1);
        } else {
            **deck2 = AddToDeck(card, deck2);
        }

        count = count + 1;
        card = card->next; // move to next node
    }


}
