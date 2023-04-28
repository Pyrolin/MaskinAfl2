#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fh;
    fh = fopen("./kort.txt", "r");
    if (fh != NULL)
    {
        char c = fgetc
        Deck deck = CreateDeck

        while ( (c = fgetc(fh)) != EOF )
            add to deck. deck char suit

        fclose(fh);
    }
    else printf("Error opening file\n");
    return 0;
}

