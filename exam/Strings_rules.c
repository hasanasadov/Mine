#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

//char
/*
int main(){
//char 1 symbol
    char myvar='b';
    printf("%c \n",myvar);
    printf("%d",myvar);
}
*/

//character functions
/*
int main(){
    char a = '7';
    int aint = a;
    char b = 'h';
    char c = 'J';
    char d = '\n';
    char e = '&';
    printf("%c\n",d);
    printf("for %c ascii= %d\n\n", a, a);
    printf("for %c isdigit= %d\n", a, isdigit(a));
    printf("for %c isdigit= %d\n\n", b, isdigit(b));
    printf("for %c isalpha= %d\n", a, isalpha(a));
    printf("for %c isalpha= %d\n\n", b, isalpha(b));
    printf("for %c isalnum= %d\n", a, isalnum(a));
    printf("for %c isalnum= %d\n\n", b, isalnum(b));
    printf("for %c isalnum= %d\n\n", e, isalnum(e));
    printf("for %c isxdigit= %d\n", a, isxdigit(a));
    printf("for %c isxdigit= %d\n\n", b, isxdigit(b));
    printf("for %c islower= %d\n", b, islower(b));
    printf("for %c isupper= %d\n\n", b, isupper(b));
    printf("for %c islower= %d\n", c, islower(c));
    printf("for %c isupper= %d\n\n", c, isupper(c));
    printf("for %c tolower= %c\n", b, tolower(b));
    printf("for %c tolower= %c\n\n", c, tolower(c));
    printf("for %c toupper= %c\n", b, toupper(b));
    printf("for %c toupper= %c\n\n", c, toupper(c));
    printf("for %c isspace= %d\n", d, isspace(d));
    printf("for %c isspace= %d\n\n", b, isspace(b));
    printf("for %c iscntrl= %d\n", d, iscntrl(d));
    printf("for %c iscntrl= %d\n\n", b, iscntrl(b));
    printf("for %c ispunct= %d\n", d, ispunct(d));
    printf("for %c ispunct= %d\n\n", b, ispunct(b));
    printf("for %c ispunct= %d\n\n", e, ispunct(e));
    printf("for %c isprint= %d\n", '\a', isprint('\a'));
    printf("for %c isprint= %d\n\n", e, isprint(e));
    printf("for %c isgraph= %d\n", ' ', isgraph(' '));
    printf("for %c isgraph= %d\n\n", e, isgraph(e));
}
*/

//Read and Print Characters

//---------getchar--------int getchar(void) -- read the one character
//---------putchar--------int putchar(int char)--print one character

/*
int main(){
    // int mychar;
    char mychar;
    printf("enter text: ");
    mychar = getchar();
    printf("name: ");
    // printf("%c",mychar);
    while (mychar!='\0'){
        putchar(mychar);
        mychar = getchar();
    }
}
*/



//string (array) and pointer
/*
int main(){
    // string-----------------------
    char myvar[] = "banm";
    printf("%s \n", myvar);

    char myvar1[5] = "banm";
    printf("%s \n", myvar1);

    char myvar2[] = {'b', 'a', 'n', 'm', '\0'};
    printf("%s \n", myvar2);

    char myvar4[100];
    printf("enter name: \n");
    scanf("%s", myvar4);
    printf("entered name: %s \n", myvar4);

    char myvar5[5] = "banm";
    printf("%c \n", *(myvar5+0));       // b
    printf("%c \n", *(myvar5 + 1));     // a

    char *mypointer = "banm";
    printf("%c \n", mypointer);
}
*/

//conversion Functions
/*
int main(){
    char z[]="9898.5";
    double f;
    int d;
    long li;
    f=atof(z);
    d=atoi("987.8");
    li=atol("98721.9");
    printf("%lf\n",f);
    printf("%d\n",d);
    printf("%ld\n",li);
}
*/


/*
int main(){
    char myvar[] = "51.52 is  accepted  ";
    double d;
    char *ptr;
    d = strtod(myvar, &ptr);
    printf("myvar=%s\n", myvar);
    printf("d=%lf\n", d);
    printf("ptr=%s\n", ptr);
    puts("");
    char mylong[] = "11  ";
    long l10, l2, l8, l16;
    l10 = strtol(mylong, &ptr, 10);
    l2 = strtol(mylong, &ptr, 2);
    l8 = strtol(mylong, &ptr, 8);
    l16 = strtol(mylong, &ptr, 16);

    printf("l10=%li\nl2=%li\nl8=%li\nl16=%li\n\n", l10, l2, l8, l16);

    const char unsign[] = "4284832";
    l10 = strtoul(unsign, &ptr, 0);
    printf("l10=%lu\n", l10);
}
*/


//Standard Input/Output Library Functions
//-----fgets--char *fgets(char *str, int n, FILE *stream)--read line
/*
int main(){
    char mystr[100];
    printf("enter line:\n");
    fgets(mystr, 100, stdin);
    printf("line:");
    puts(mystr);
}
*/

//----sprintf--int sprintf(char *str, const char *format, ...) -- formatted output
/*
int main(){
    char mystr[100];
    int intNumber = 50;
    sprintf(mystr, "my integer = %d", intNumber);
    puts(mystr);
}
*/

//----sscanf-- int sscanf(const char *str, const char *format, ...) -- reads formatted input from a string
/*
int main(){
    char mystr[] = "45 54.4 9.432 salam";
    int intNumber;
    double doubleNumber,d2;
    char soz[10];
    sscanf(mystr, "%d %lf %lf %s", &intNumber, &doubleNumber,&d2,soz);

    printf("my integer = %d\n", intNumber);
    printf("my Doublefloat = %lf %lf", doubleNumber,d2);
    printf("\n%s",soz);
}
*/


//String-Manipulation and Comparison Function Functions of the String-Handling Library

//--------strcpy --char *strcpy(char *dest, const char *src)
/*
int main(){
    char str1[20] = "C programming";
    char str2[20];

    // copying str1 to str2
    strcpy(str2, str1);

    puts(str2); // C programming

    return 0;
}
*/

//--------strncpy--char * strncpy ( char * destination, const char * source, size_t num ) bir stringi o birine kopyalayir
/*
int main(){
    char src[40] = "ey Heyat sen Ne qeribesen?1!";
    char dest[14];

    strncpy(dest, src, 13);
    puts(dest);

    return (0);
}
*/

//-------strcat--char *strcat(char *destination, const char *source)--append etmek
/*
int main() {
   char str1[100] = "This is ", str2[] = "nazrin";

   // concatenates str1 and str2
   // the resultant string is stored in str1.
   strcat(str1, str2);

   puts(str1);
}
*/

//-------strncat--char *strcat(char *destination, const char *source) --append edir birinciye n qeder simvol
/*
int main () {
   char src[50], dest[50];
   strcpy(src,  "This is sourcesourcesourcesourcesourcesource");
   strcpy(dest, "This is destination");
   strncat(dest, src, 20);
   printf("Final destination string : \n%s", dest);
}
*/


//----------Search Functions of the String-Handling Library
//------strcmp-- int strcmp(const char *str1, const char *str2)  -- compare
/*
int main(){
    char str1[] = "abCd", str2[] = "abCd", str3[] = "abcd";
    int result;

    // comparing strings str1 and str2
    result = strcmp(str1, str2);
    printf("strcmp(str1, str2) = %d\n", result);

    // comparing strings str1 and str3
    result = strcmp(str1, str3);
    printf("strcmp(str1, str3) = %d\n", result);

    return 0;
}
*/

//------strncmp--int strncmp ( const char * str1, const char * str2, size_t num )- hansi hisseye qeder muqayise et
/*
int main(){
    char str1[15];
    char str2[15];
    int ret;
    strcpy(str1, "abcdef");
    strcpy(str2, "ABCDEF");
    ret = strncmp(str1, str2, 4);
    if (ret < 0){
        printf("str1 is less than str2");
    }
    else if (ret > 0){
        printf("str2 is less than str1");
    }
    else{
        printf("str1 is equal to str2");
    }
    return (0);
}
*/

//-----strchr--char *strchr(const char *str, int c)--first occurence of the character - characterden sonrak stringi verir
/*
int main () {
   char str[] = "naz.elmaz sabah. axsham";
   char ch = '.';
   char *ret;

   ret = strchr(str, ch);

   printf("String after first '%c' is - \n%s\n", ch, ret);
}
*/

//-----strrchr--char *strrchr(const char *str, int c) --sondan bashlayaraq oxuuyur ,charachter olanda gorur , ordan sonrani cap edir
/*
int main(){
    int len;
    char str[] = "naz.elmaz sabah. axsham";
    char ch = '.'; // int ch='.';
    char *ret;
    ret = strrchr(str, ch);
    printf("String after '%c' is - '%s'\n", ch, ret);
    return (0);
}
*/

//---------------------strspn --size_t strspn(const char *str1, const char *str2)
// STRTEXT stringinde once gelen ve CSET stringde var olan stringlerin sayini qaytarir
// yeni sira ile oxuyur, eger 2ci stringdedirse, onlarin sayini verir; 1ci stringde ferqli sira ile duzlenibse, yeni aralarina bashqa simvol giribse, onda ishlemir
/*
int main(){
    int i;
    char strtext[] = "10g6htsasas";
    char cset[] = "1234567890h";

    i = strspn(strtext, cset);
    printf("The initial number has %d digits.\n", i);
    return 0;
}
*/

//----strcspn--size_t strcspn ( const char * str1, const char * str2 ) -characterin stringde yerleshdiyi indexi verir
/*
int main (){
  char str[] = "fcba73";
  char keys[] = "1234567890";
  int i;
  i = strcspn (str,keys);
  printf ("The first number in str is at position %d.\n",i);
  return 0;
}
*/

//-------strpbrk --char *strpbrk(const char *str1, const char *str2) --
// verilen STR-in icinde Key strignden var olan simvvolun "adresini" verir,ona gore de *pch kimi cap edirik.
/*
int main(){
    char str[] = "This is a sample string";
    char key[] = "aeiou";
    char *pch;
    printf("Vowels in '%s': \n", str);
    pch = strpbrk(str, key);
    while (pch != NULL){
        printf("%c ", *pch);
        printf("\n");
        pch = strpbrk(pch+1, key);
    }
    return 0;
}
*/

//----strstr --char *strstr(const char *haystack, const char *needle) stringin icinde stingin olub omlamasini yoxlayir, varsa, eynisini qaytarir
/*
int main(){
    char haystack[20] = "Naz elmazzz";
    char needle[10] = "az";
    char *ret;
    int c=0;
    ret = strstr(haystack, needle);
    while (ret!=NULL){
        printf("The substring is: %s\n", ret);
        c++;
        ret = strstr(ret+1, needle);  
    }
    printf("%d",c);
    return (0);
}
*/

//----strtok--char *strtok(char *str, const char *delim) --bu, split kimi ishleyir, simvoldan bir kesir; while-da null qoymaq qaldigi yerden davam etmekdir, cunki str-de hemin simvolu \0-a cevirir
/*
int main(){
    char str[80] = "This is-naz.elmaz-com";
    const char s[4] = " .-";
    char *token;
    token = strtok(str, s);
    while (token != NULL){
        printf("%s\n", token);
        token = strtok(NULL, s);
    }
    return (0);
}
*/

//-------strlen-- size_t strlen(const char *str) --computes the length of the string str up to, but not including the terminating null character.
/*
int main () {
   char str[50];
   int len;
   strcpy(str, "This is tutorialspoint.com");
   len = strlen(str);
   printf("Length of |%s| is %d\n", str, len);
   return(0);
}
*/


//--------Memory Functions of the String-Handling Library
//--------memcpy -- void *memcpy(void *dest, const void *src, size_t n)-- copies n characters from memory area src to memory area dest.
/*
int main () {
   const char src[50] = "naz.elmaz sabah. axsham";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("%d\n%d\n", dest, src);

   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, strlen(src)+1);
   
   printf("%d\n%d\n", dest, src);
   printf("After memcpy dest = %s\n", dest);
   int  a[2]={2,3};
   int  b[2]={5,6};
   //a=b;
   memcpy(a,b,sizeof(b));
   printf("a[0]= %d\ta[1]= %d\n", a[0], a[1]);
   printf("b[0]= %d\tb[1]= %d\n", b[0], b[1]);
   return(0);
}
*/

//-------memmove--void *memmove(void *str1, const void *str2, size_t n)--copies n characters from str2 to str1, but for overlapping memory blocks, memmove() is a safer approach than memcpy().
/*
int main () {
   char s[15] = "ABCDEFGHIJKLMN";
   printf("Before memmove dest = %s\n", s );
   memmove(s, s+3, 7);
   printf("Before memmove dest = %s\n", s);
   char s1[15] = "ABCDEFGHIJKLMN";
   printf("\nBefore memcpy dest = %s\n", s1 );
   memcpy(s1, s1+3, 5);
   printf("Before memcpy dest = %s\n", s1);
   return(0);
}
*/

//------memcmp  int memcmp(const void *str1, const void *str2, size_t n) -- compares the first n bytes of memory area str1 and memory area str2.
/*
int main () {
    char str1[15];
    char str2[15];
    int ret;
    memcpy(str1, "abcdef", 6);
    memcpy(str2, "ABCDEF", 6);
    ret = memcmp(str1, str2, 5);
    if(ret > 0) {
      printf("str2 is less than str1 %d",ret);
   } else if(ret < 0) {
      printf("str1 is less than str2 %d",ret);
   } else {
      printf("str1 is equal to str2 %d",ret);
   }
   int  c[2]={2,3};
   int  d[2]={2,3};
   if(memcmp(c,d, 2*sizeof(int))!=0){
        printf("\nnot same array\n");
   }
   else{
        printf("\n same array\n");
   }
   return(0);
}
*/

//----memchr-- void *memchr(const void *str, int c, size_t n) --searches for the first occurrence of the character c (an unsigned char) in the first n bytes of the string pointed to, by the argument str.
/*
int main () {
   const char str[] = "naz.elmaz sabah. axsham";
   const char ch = '.';
   char *ret,*ret1,*ret2;
   ret = memchr(str, ch, strlen(str));
   printf("String after |%c| is - |%s|\n", ch, ret);

   int  a[2]={2,3}; //0 0 0 2 0 0 0 3
   int  b[2]={1,5}; //0 0 0 1 0 0 0 5
   ret1=memchr(a,4, 2*sizeof(int));
   ret2=memchr(b,0, 2*sizeof(int));
   if(ret1!=NULL){
      printf("\nFound the Byte\n");
   }
   else{
      printf("\nNOT Found the Byte\n");
   }

   if(ret2!=NULL){
      printf("\nFound the Byte\n");
   }
   else{
      printf("\nNOT Found the Byte\n");
   }
   return(0);
}
*/

//--------memset--void *memset(void *str, int c, size_t n)--copies the character c (an unsigned char) to the first n characters of the string pointed to, by the argument str.
/*
int main () {
   char str[50];
   strcpy(str,"This is string.h library function");
   puts(str);
   memset(str,'$',7);
   puts(str);

   int  a[2]={2,3}; 
   memset(a,2,2*sizeof(int));
   //0 1 0 1   0 1 0 1
   printf("%d %d\n", a[0], a[1]);
   printf("%x %x\n", a[0], a[1]); 
   return(0);
}
*/