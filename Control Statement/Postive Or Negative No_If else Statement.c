#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;
    printf("\n Enter a Number = ");
    scanf("%d",&No);

    if(No>0)
    {
        printf("\n Welcome You Have Entered a positive Number");
    }
    else
    {
        printf("\n Welcome You Have Entered a Negative Number");
    }
    getch();
    return 0;
}
