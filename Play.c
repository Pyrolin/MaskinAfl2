#include "Main.h"
#include "dealCards.c"
#include "string.h"

void Play(){
  strcpy(PHASE,"PLAY");
       dealCards();
   }
