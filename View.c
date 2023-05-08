#include "linkedlists.h"
#include <stdio.h>
#include "main.h"

void Printdeck(Card *list){
    // list points to the head of a linked list of cards
    int count = 1;
    printf("cards on the fields");
    while (list != NULL) {
        printf("Value: %c - Suit: %c\n", list->value, list->suit);

        count = count + 1;
        list = list ->next; // move to next node
    }
    printf("\n\n");
}

void printBoard(char message[]) {

    int hasCards = 1;

    int C1_Cards = (C1) ? 1 : 0;
    int C2_Cards = (C2) ? 1 : 0;
    int C3_Cards = (C3) ? 1 : 0;
    int C4_Cards = (C4) ? 1 : 0;
    int C5_Cards = (C5) ? 1 : 0;
    int C6_Cards = (C6) ? 1 : 0;
    int C7_Cards = (C7) ? 1 : 0;

    int F_Cards = 1;
    int F_insert = 1;


    printf("C1  C2  C3  C4  C5  C6  C7 \n\n");

    while (hasCards) {
        if (C1 && C1->suit != 'X') {
            printf("%c%c    ", C1->value, C1->suit);
            C1 = C1->next;
        } else {
            C1_Cards = 0;
            printf("        ");
        }

        if (C2 && C2->suit != 'X') {
            printf("%c%c    ", C2->value, C2->suit);
            C2 = C2->next;
        } else {
            C2_Cards = 0;
            printf("        ");
        }

        if (C3 && C3->suit != 'X') {
            printf("%c%c    ", C3->value, C3->suit);
            C3 = C3->next;
        } else {
            C3_Cards = 0;
            printf("        ");
        }

        if (C4 && C4->suit != 'X') {
            printf("%c%c    ", C4->value, C4->suit);
            C4 = C4->next;
        } else {
            C4_Cards = 0;
            printf("        ");
        }

        if (C5 && C5->suit != 'X') {
            printf("%c%c    ", C5->value, C5->suit);
            C5 = C5->next;
        } else {
            C5_Cards = 0;
            printf("        ");
        }

        if (C6 && C6->suit != 'X') {
            printf("%c%c    ", C6->value, C6->suit);
            C6 = C6->next;
        } else {
            C6_Cards = 0;
            printf("        ");
        }

        if (C7 && C7->suit != 'X') {
            printf("%c%c    ", C7->value, C7->suit);
            C7 = C7->next;
        } else {
            C7_Cards = 0;
            printf("        ");
        }

        if (F_insert) {
            printf("[]  F%d", F_Cards);
            F_insert = 0;
            F_Cards++;
        } else if (!F_Cards || F_Cards <= 4) {
            F_insert = 1;
        }

        printf("\n");

        if (!C1_Cards && !C2_Cards && !C3_Cards && !C4_Cards && !C5_Cards && !C6_Cards && !C7_Cards) {
            hasCards = 0;
        }

    }

    printf("\nLAST Command: %s\n", lastCommand);
    printf("Message: %s\n", message);
    printf("INPUT > \n");
}