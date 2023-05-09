#include <stdlib.h>
#include <string.h>

 void quitGame(char* card){

    extern char PHASE[];

     free(card);

     // return to startup phase.
     strcpy(PHASE,"STARTUP");

}

 void playGame() {
    // initialize the deck of cards
     char* card = malloc(sizeof(char)* 52 );
     // play the game using the deck of cards.


     // if the player wants to quit the game and return to the startup phase.
     quitGame(card);
}