//Write a program to accept a character from the user and determine if it is a vowel (a, e, i, o, u), a consonant, or other. Display the result

#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = '\0';

    printf("Enter a character to check given character is vowel,constant or other :\n\n");
    scanf("%c",&Ch);

    if((Ch == 'a')||(Ch == 'e')||(Ch == 'i')||(Ch == 'o')||(Ch == 'u')||(Ch == 'a')||(Ch == 'e')||(Ch == 'i')||(Ch == 'o')||(Ch == 'u'))
    {
        printf("\n\n %c is a vowel character",Ch);
    }

    else if((Ch > 'a' && Ch <= 'z')||(Ch > 'a' && Ch <= 'z'))
    {
        printf("\n \n %c is a constant Character",Ch);
    }
    else
    {
        printf("\n\n % is other symbol or Number",Ch);
    }
    getch();
    return 0;
}
