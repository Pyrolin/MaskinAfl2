#include <stdio.h>
#include <string.h>
void startPhase(char input[]) {
       if(strcmp(input, "LD") != 0) {
           //Load();
       }

       if(strcmp(input, "SC") != 0){
           //showCards();
       }
       if(strcmp(input, "SD") != 0){
           //splitDeck();
       }
       if(strcmp(input, "SH") != 0){
           //shuffleDeck();
       }
       if(strcmp(input, "S") != 0){
           //Save();
       }
       if(strcmp(input, "QQ") != 0){
           //quit();
       }
       else {
           printf("Command not available in the STARTUP phase.");
       }
    }

void playPhase(char input[]) {
    if (strcmp(input, "Q") != 0){
        //do the return command
    }
    //move function
}