
//Write a program to accept a character from user and check whether it is alphabet or not(A-Z , a-z).

#include<stdio.h>
#include<conio.h>

int main()

{
    char Ch = '/0';

    printf("Enter Character To Check It is Alphabet or Not : ");
    scanf("%c",&Ch);

    if(((Ch >= 'A') && (Ch <='Z')) || ((Ch >= 'a') && (Ch <='z')))
    {
        printf("\n\n The Given Character is Alphabet");
    }
    else
    {
        printf("\n\n The Given Character Is Not Alphabet");
    }

    getch();
    return 0;
}
