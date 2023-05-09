#include <stdio.h>
#include <string.h>
#include "main.h"
#include "command.h"
#include "printview.h"


int isRunning;
char PHASE[] = "STARTUP";
char lastCommand[6] = "";
char message[225];
int isLoaded = 0;

Card *deck;

Card *C1;
Card *C2;
Card *C3;
Card *C4;
Card *C5;
Card *C6;
Card *C7;

Card *F1;
Card *F2;
Card *F3;
Card *F4;

/* How we could implement a linked list
typedef struct deckType Deck;
struct deckType {
    char value;
    char suit;
    Deck *next;
};

Deck *list = NULL;

Deck * CreateDeck(char value, char suit) {
    Deck *newDeck;
// allocate a new node
    newDeck = (Deck*)malloc(sizeof(Deck));
// initialize node data
    newDeck->value = value;
    newDeck->suit = suit;
// initialize pointer
    newDeck->next = NULL;
    return newDeck;
}
*/


int main(int argc, char *argv[]) {
    isRunning = 1; // True/False

    strcpy(message, "OK");
    printBoard();

    while(isRunning) {
        if (strcmp(PHASE, "PLAY") == 0) {
            fgets(lastCommand, sizeof(lastCommand), stdin);

            lastCommand[strcspn(lastCommand, "\n")] = '\0';

            playPhase(lastCommand); //Not implemented yet
            // response would be an array of strings,
            // response[0] would be either "ERROR" or "SUCCESS"
            // and response[1] would be the message that should be displayed

            printBoard(); //Not implemented yet

        } else if (strcmp(PHASE, "STARTUP") == 0) {
            fgets(lastCommand, sizeof(lastCommand), stdin);
            lastCommand[strcspn(lastCommand, "\n")] = '\0';

            // We should maybe split input up here into two variables, one for the commands and one for the arguments (filename, split etc.)
            startPhase(lastCommand); //Not implemented yet
            // response would be an array of strings,
            // response[0] would be either "ERROR" or "SUCCES"
            // and response[1] would be the message that should be displayed

            printBoard(); //Not implemented yet
        }
    }
}