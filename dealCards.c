#include "delete.h"
#include "split.h"
#include "addToDeck.h"

/**
 * Deals the cards out in the 7 columns, from the loaded deck
 */
void dealCards() {
    extern Card* deck;
    extern Card* C1;
    extern Card* C2;
    extern Card* C3;
    extern Card* C4;
    extern Card* C5;
    extern Card* C6;
    extern Card* C7;

    extern Card* F1;
    extern Card* F2;
    extern Card* F3;
    extern Card* F4;

    extern int isDealt;

    if (isDealt) {
        return;
    }


    Card *prev = deck->previous->previous;
    DeleteList(prev);
    C1 = AddToDeck(prev, NULL);

    prev = deck->previous->previous;
    DeleteList(prev);
    C2 = AddToDeck(prev, NULL);
    Card *C2Next = C2;
    for (int i = 0; i < 5; i++) {
        prev = deck->previous->previous;
        DeleteList(prev);
        C2Next = AddToDeck(prev, C2Next);
    }

    prev = deck->previous->previous;
    DeleteList(prev);
    C3 = AddToDeck(prev, NULL);
    Card *C3Next = C3;
    for (int i = 0; i < 6; i++) {
        prev = deck->previous->previous;
        DeleteList(prev);
        C3Next = AddToDeck(prev, C3Next);
    }

    prev = deck->previous->previous;
    DeleteList(prev);
    C4 = AddToDeck(prev, NULL);
    Card *C4Next = C4;
    for (int i = 0; i < 7; i++) {
        prev = deck->previous->previous;
        DeleteList(prev);
        C4Next = AddToDeck(prev, C4Next);
    }

    prev = deck->previous->previous;
    DeleteList(prev);
    C5 = AddToDeck(prev, NULL);
    Card *C5Next = C5;
    for (int i = 0; i < 8; i++) {
        prev = deck->previous->previous;
        DeleteList(prev);
        C5Next = AddToDeck(prev, C5Next);
    }

    prev = deck->previous->previous;
    DeleteList(prev);
    C6 = AddToDeck(prev, NULL);
    Card *C6Next = C6;
    for (int i = 0; i < 9; i++) {
        prev = deck->previous->previous;
        DeleteList(prev);
        C6Next = AddToDeck(prev, C6Next);
    }

    prev = deck->previous->previous;
    DeleteList(prev);
    C7 = AddToDeck(prev, NULL);
    Card *C7Next = C7;
    for (int i = 0; i < 10; i++) {
        prev = deck->previous->previous;
        DeleteList(prev);
        C7Next = AddToDeck(prev, C7Next);
    }

    Card *dummy1 = CreateCard('X', 'X');
    F1 = AddToDeck(dummy1, NULL);

    Card *dummy2 = CreateCard('X', 'X');
    F2 = AddToDeck(dummy2, NULL);

    Card *dummy3 = CreateCard('X', 'X');
    F3 = AddToDeck(dummy3, NULL);

    Card *dummy4 = CreateCard('X', 'X');
    F4 = AddToDeck(dummy4, NULL);

    isDealt = 1;
}