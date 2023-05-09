#include <stdio.h>
#include <stdlib.h>
#include "linkedlists.h"
#include "addToDeck.h"
#include "delete.h"
#define MAX_CARDS 52

/**
 * Shuffles a deck
 * @param card1 The card that should be shuffled
 * @param card2 The card that should be shuffled
 */
void shuffleDeck(Card *card1, Card *card2) {
Card *lastNode = card1;
while (lastNode->next != NULL) {
    lastNode = lastNode->next;
}
lastNode->next = card2;

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

/**
 * Splits and shuffles a deck
 * @param card The start card from the deck that should be split and shuffled
 * @param split Where the deck should be split
 */
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
            AddToDeck(newNode, deck1);
        } else {
            AddToDeck(newNode, deck2);
        }
        count++;
        card = card->next;
    }
    shuffleDeck(deck1, deck2);

    for (Card *node = deck1; node != NULL; node =node->next){
        printf("%c of %c>'\n", node->value, node->suit);
    }
}


/**
 * Splits the main deck in two
 * @param split Where the deck should be split
 */
void splitDeck(int split) {
// list points to the head of a linked list of Flights
    int count = 1;
    extern Card* deck;

    Card* card = deck;

    Card *dummy1 = CreateCard('X','X');
    Card *dummy2 = CreateCard('X','X');

    Card *deck1 = NULL;
    Card *deck2 = NULL;

    deck1 = AddToDeck(dummy1, deck1);
    deck2 = AddToDeck(dummy2, deck2);

    Card *temp = NULL;
    while (card->suit != 'X') { // while not at the end
        if (count < split) {
            temp = card->next;
            DeleteList(card);
            deck1 = AddToDeck(card, deck1);
            card = temp;
        } else {
            temp = card->next;
            DeleteList(card);
            deck2 = AddToDeck(card, deck2);
            card = temp;
        }

        count = count + 1;
        //card = card->next; // move to next node
    }

    deck1 = deck1->next->next;
    deck2 = deck2->next->next;

    Card* next1 = NULL;
    Card* next2 = NULL;

    while(1) {
        if (deck1->next->suit != 'X') {
            next1 = deck1->next;
            DeleteList(deck1);
            deck = AddToDeck(deck1, deck);
            deck1 = next1;
        }
        if (deck2->next->suit != 'X') {
            next2 = deck2->next;
            DeleteList(deck2);
            deck = AddToDeck(deck2, deck);
            deck2 = next2;
        }

        if (deck1->next->suit == 'X' && deck2->next->suit == 'X') {
            DeleteList(deck1);
            deck = AddToDeck(deck1, deck);
            DeleteList(deck2);
            deck = AddToDeck(deck2, deck);
            break;
        }
    }

    deck = deck->next->next;


}
