#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
int main()
{
    int count = 0;
    char melumat[] = "Computer science is the study of algorithmic processes and computational machines.";
    FILE *Fuad = fopen("Fuad.txt", "r+");
    for (int i = 0; i < strlen(melumat); i++)
    {
        fputc(melumat[i], Fuad);
    }

    rewind(Fuad);

    for (int i = 0; !feof(Fuad); i++)
    {
        count++;
        printf("%c", fgetc(Fuad));
    }
    printf("number of characters in File: %d\n", count);
    // ask user
} */

/*
int main()
{
    int count = 0;
    char s1[100];
    char melumat[100] = "Computer science is the study of algorithmic processes and computational machines.";
    FILE *aliniyaz = fopen("alioglan.txt", "a+");
    for (int i = 0; i < strlen(melumat); i++)
    {
        fputc(melumat[i], aliniyaz);
    }
    rewind(aliniyaz);
    for (int i = 0; !feof(aliniyaz); i++)
    {
        count++;
        printf("%c", fgetc(aliniyaz));
    }
    printf("\n\nNumber of characters in a file: %d", count);
    puts("\nEnter a string:");
    gets(s1);
    fputc('\n', aliniyaz);
    for (int i = 0; i < strlen(s1); i++)
    {

        fputc(s1[i], aliniyaz);
    }

    fclose(aliniyaz);
}
*/