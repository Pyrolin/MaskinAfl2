#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fh;
    fh = fopen("./kort.txt", "r");
    if (fh != NULL)
    {
        char c;
        while ( (c = fgetc(fh)) != EOF )
            putchar(c);

        fclose(fh);
    }
    else printf("Error opening file\n");
    return 0;
}
