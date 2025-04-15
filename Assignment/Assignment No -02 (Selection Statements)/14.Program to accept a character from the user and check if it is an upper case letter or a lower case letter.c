//Write a program to accept a character from the user and check if it is an upper case letter or a lower case letter

#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = '\0';

    printf("Enter a character to check given character is upper,lower or other :\n\n ");
    scanf("%c",&Ch);

    if ((Ch >= 'A' && Ch <= 'Z'))
    {
        printf("\n\n %c is a Upper Character", Ch);
    }
    else if((Ch >= 'a' && Ch <='z'))
    {
        printf("\n\n %c is a Lower character",Ch);
    }
    else
    {
        printf("\n\n % is Not a character",Ch);
    }
    getch();
    return 0;
}
