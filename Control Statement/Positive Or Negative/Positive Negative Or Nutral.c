#include<stdio.h>
#include<conio.h>

int main()

{
    int Num = 0;

    printf("Enter An integer Number ");
    scanf("%d",&Num);

    if (Num == 0)
    {
        printf("\n The Given Number Is Neutral ");
    }
    else if(Num>0)
    {
        printf("\n The Given Number Is positive ");
    }
    else
    {
        printf("\n The Given Number Is Negative ");
    }

    getch;
    return 0;
}
