#include <stdio.h>
#include "stdlib.h"

int main()
{
    FILE *f = fopen("./kort.txt", "w");
    if (f == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    const char *text = "TestTest";
    fprintf(f, "Ekstra test: %s\n", text);
    
    fclose(f);
    return(0);
}