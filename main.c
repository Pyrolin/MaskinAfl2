#include <stdio.h>
#include <string.h>
#include "command.h"
#include "view.h"
#include "linkedlists.h"

int isRunning;
char PHASE[] = "STARTUP";
char lastCommand[12] = "";
char message[225];
int isLoaded = 0;
int isDealt = 0;

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

            if (F1->previous->previous->value == 'K' && F2->previous->previous->value == 'K' && F3->previous->previous->value == 'K' && F4->previous->previous->value == 'K') {
                printf("\n\n Congrats, you won the game!");
                isRunning = 0;
            }

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