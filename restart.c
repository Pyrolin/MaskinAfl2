#include <string.h>

 /**
  * Returns from PLAY phase to STARTUP phase
  */
 void quitGame(){

    extern char PHASE[];
    extern char message[];

     // return to startup phase.
     strcpy(PHASE,"STARTUP");
     strcpy(message, "OK");

 }