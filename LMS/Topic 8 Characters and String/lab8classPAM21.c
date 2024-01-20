#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Task 1
/*

int main()
{
    char c = 'a';
    int x, y, z;
    double d, e, f;
    char *ptr;
    char s1[100], s2[100];
    // a
    c = toupper(c);
    // b
    if (isdigit(c) == 0)
    {
        printf("is not a digit");
    }
    else
    {
        printf("is a digit");
    }
    // c
    printf("\n");
    if (iscntrl(c) == 0)
    {
        printf("is not a control\n");
    }
    else
    {
        printf("is a control\n");
    }
    // d
    fgets(s1, 100, stdin);
    // e
    puts(s1);
    // f

    ptr = strrchr(s1, c);

    printf("\nString after '%c' is - '%s'\n", c, ptr);
    // g
    putchar(c);
    //h

}
*/
// exercize 3 way (1)
/*
int main()
{
    char s[100];
    gets(s);
    puts(s);
    for (int n = 0; n < 100; n++)
    {
        if (isupper(s[n]) == 0)
        {
            s[n] = toupper(s[n]);
        }
        else
        {
            s[n] = tolower(s[n]);
        }
    }
    puts(s);
}
*/
// exercize 3 way (12)
/*
int main()
{
    char s[100];
    gets(s);
    for (int n; n < 100; n++)
    {
        if (s[n] >= 97 && s[n] <= 122)
        {
            s[n] = s[n] - 32;
        }
        else if (s[n] <= 90 && s[n] >= 65)
        {
            s[n] = s[n] + 32;
        }
    }
    puts(s);

}
*/

// task 5----way1
/*
int main()
{
    char str[6];
    double arr[6];
    double total = 0;

    for (int i = 0; i < sizeof(str); i++)
    {
        puts("enter the string value:");
        gets(str);
        sscanf(str, "%lf", &arr[i]);
        total += arr[i];
    }
    double average = total / sizeof(str);
    printf("the total number is %lf\n", total);
    printf("the average value is %lf", average);
}
*/
// task 6
/*
int main()
{
    char s1[50] = "jack";
    char s2[50] = "jill";
    char s3[50];

    printf("%c%s\n", toupper(s1[0]), &s1[1]);
    printf("%s\n", strcpy(s3, s2));
    printf("%s\n", strcat(strcat(strcpy(s3, s1), " and "), s2));
    printf("%u\n", strlen(s1) + strlen(s2));
    printf("%u\n", strlen(s3));
}
*/
// exercie 8 way 2
/*
int main()
{
    char c = 'e';
    int first, last;
    char st[100] = "Teaching is an instruction or delivering a skill or subject";
    for (int i = 0; i < 101; i++)
    {
        if (st[i] == c)
        {
            first = i;
            break;
        }
    }
    printf("%d\n", first);

    for (int i = 100; i > (-1); i--)
    {
        if (st[i] == c)
        {
            last = i;
            break;
        }
    }
    printf("%d", last);
}
*/
// exercie 8 way - 1
/*
int main()
{
    char c = 'e';
    char *first, *last;
    char st[100] = "Teaching is an instruction or delivering a skill or subject";

    first = strchr(st, c);
    last = strrchr(st, c);
    printf("%d\n", first);
    printf("%d\n", last);
}
*/

// exercise 9
/*
int main()
{
    char s2[200] = "Teaching is an instruction or teaching delivering a skill or subject";
    char s1[10] = "teach";
    char *a;

    a = strstr(s2, s1);
    if (a == NULL)
    {
        printf("not presenting in string");
    }
    else
    {
        printf("presenting in string");
    }
}
*/

int main()
{
    char s1[1001] = "Educational@ methods include tea@ching, tra@ining @nd discussion";
    char s2[] = "@";
    char *token;

    token = strtok(s1, s2);
    while (token != NULL)
    {
        printf(" %s", token);
        token = strtok(NULL, s2);
    }
}