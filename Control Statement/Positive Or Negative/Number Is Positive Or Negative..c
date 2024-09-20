#include<stdio.h>
#include<conio.h>

int main()

{
    int No = 0;
    printf("\n Enter An Integer Number ");
    scanf("%d",&No);

    if (No > 0)
    {
        printf("\n The Given Number %d is Positive ",No);
    }

    else
    {
        printf("\n The Given Number %d is Negative ",No);
    }

    getch();
    return 0;
}
