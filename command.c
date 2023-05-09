#include <stdio.h>
#include <string.h>
#include "play.h"
#include "load.h"
#include "moveCards.h"
#include "quit.h"
#include "restart.h"
#include "split.h"

void startPhase(char input[]) {
    if(strcmp(input, "LD") == 0) {
        load();
    } else if(strcmp(input, "SD") == 0){
        splitDeck(10);
    } else if(strcmp(input, "QQ") == 0){
        quit();
    } else if (strcmp(input, "P") == 0) {
        Play();
    } else {
        extern char message[];
        strcpy(message, "Command not available in the STARTUP phase.");
    }
}



void playPhase(char input[]) {
    if (strcmp(input, "Q") == 0){
        quitGame();
    } else {
        moveCards(input);
    }
    //move function
}