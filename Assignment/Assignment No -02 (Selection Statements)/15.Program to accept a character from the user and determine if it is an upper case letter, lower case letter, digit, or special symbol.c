//Write a program to accept a character from the user and determine if it is an upper case letter, lower case letter, digit, or special symbol

#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch ='\0';

    printf("Enter a character to check given character is upper,lower or other :\n\n");
    scanf("%c",&Ch);

    if((Ch >='A' && Ch <= 'Z'))
    {
        printf("\n\n %c is Upper character",Ch);
    }

    else if((Ch >= 'a' && Ch <= 'z'))
    {
        printf("\n\n %c is Lower character",Ch);
    }
    else if((Ch >= '0' && Ch <= '9'))
    {
        printf("\n\n %c is a Digit",Ch);
    }
    else
    {
        printf("\n\nIt Is Special Symbol..");
    }

    getch();
    return 0;
}
