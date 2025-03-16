#include <stdio.h>
#include <conio.h>

int main()
{

    int n = 0;
    printf("Enter no.  ");
    scanf("%d",&n);
    if (n>= 0 && n <= 127)
    {
        printf("The Character of %d Ascii Value is %c\n",n,n);
    }
    else
    {
        printf("Invalid No.\n");
    }

    getch();

    return 0;
}

