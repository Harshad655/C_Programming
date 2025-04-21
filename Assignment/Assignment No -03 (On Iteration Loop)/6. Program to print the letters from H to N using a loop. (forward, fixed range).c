///Write a program to print the letters from H to N using a loop. (forward, fixed range)

#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = 'H';

    for(Ch = 'H'; Ch <= 'N'; Ch++)
    {
        printf("\n %c",Ch);
    }

    getch();
    return 0;
}
