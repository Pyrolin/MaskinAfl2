#include <stdlib.h>
#include <string.h>

 void quitGame(){

    extern char PHASE[];
    extern char message[];

     // return to startup phase.
     strcpy(PHASE,"STARTUP");
     strcpy(message, "OK");

 }