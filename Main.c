#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "main.h"
#include "Load.c"

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
    Load();
    /* Temp commented for testing
    isRunning = 1; // True/False

    createBoard(); //Not implemented yet, should render the initial empty board

    while(isRunning) {
        if (strcmp(PHASE, "PLAY") == 0) {
            char input[6]; //Max input length can be 6 chars long (should maybe handle if the user inputs something longer)

            fgets(input, sizeof(input), stdin);

            char** response = executePlayCommand(input); //Not implemented yet
            // response would be an array of strings,
            // response[0] would be either "ERROR" or "SUCCES"
            // and response[1] would be the message that should be displayed

            printBoard(response[0], response[1]); //Not implemented yet

        } else if (strcmp(PHASE, "STARTUP") == 0) {
            char input[2]; //Max input length can be 2 chars long (should maybe handle if the user inputs something longer)

            fgets(input, sizeof(input), stdin);

            // We should maybe split input up here into two variables, one for the commands and one for the arguments (filename, split etc.)
            char** response = executeStartupCommand(input); //Not implemented yet
            // response would be an array of strings,
            // response[0] would be either "ERROR" or "SUCCES"
            // and response[1] would be the message that should be displayed

            printBoard(response[0], response[1]); //Not implemented yet
        }
    }
    */

}