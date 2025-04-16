
//Write a program to accept a character from user and convert case (Toggle Case) of that character.

#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = '/0';

    printf("Enter a Character To Toggle It :");
    scanf("%c",&Ch);

    if ((Ch >= 'A') && (Ch <='Z'))
    {
        Ch = Ch + 32;
    }
    else if ((Ch >= 'a') && (Ch <='z'))
    {
        Ch = Ch - 32;
    }

    printf("\n\n The Character After Toggle It Becomes : %c",Ch);

    getch();
    return 0;
}
