///Write a program to print the letters from w to e using a loop. (reverse, fixed range)


#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = '\0';

    for(Ch = 'W'; Ch >= 'E'; Ch--)
    {
        printf("\n %c",Ch);
    }
    getch();
    return 0;
}
