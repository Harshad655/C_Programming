//Write a program to find the character for an ASCII value provided by the user and display the result
#include <stdio.h>
#include <conio.h>

int main()
{

    int N = 0;
    printf("Enter no.  ");
    scanf("%d",&N);
    if (N >= 0 && N <= 127)
    {
        printf("The Character of %d Ascii Value is %c\n",N,N);
    }
    else
    {
        printf("Invalid No.\n");
    }

    getch();

    return 0;
}

