#include "Load.c"
#include "stdio.h"
#include "Split.c"
#include "linkedlists.h"
#include "Save.c"
#include "Quit.c"
void startPhase(char input) {
       if(input == 'LD') {
           Load();
       }

       if(input == 'SW'){
           showCards();
       }
       if(input == 'SL'){
           splitDeck();
       }
       if(input == 'SR'){
           shuffleDeck();
       }
       if(input == 'SD'){
           Save();
       }
       if(input == 'QQ'){
           quit();
       }
       else {
           printf("Command not available in the STARTUP phase.");
       }
    }

void playPhase(char input) {
    if (input =='Q'){
        //do the return command
    }
    //move function
}