
///Write program to accept numbers from user as x and y and print x^y.

#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, Res = 0, x = 0, y = 0;

    printf("Enter Value of x :");
    scanf("%d",&x);
    printf("Enter Value of y :");
    scanf("%d",&y);

    for(i = 1, Res = 1; i <= y; i++)
    {
        Res = Res * x;
    }

    printf("\n\n %d^%d = %d",x,y,Res);

    getch();
    return 0;
}

