#include <stdlib.h>
#include <string.h>
#include "Main.h"

 void quitGame(char* deck){

     free(deck);

     // return to startup phase.
     strcpy(PHASE,"STARTUP");
}

 void playGame(){
    // initialize the deck of cards
     char* deck = malloc(sizeof(char)* 52 );
     // play the game using the deck of cards.


     // if the player wants to quit the game and return to the startup phase.
     quitGame(deck);
}