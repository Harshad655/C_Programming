#include<stdio.h>
#include<conio.h>

int main()

{
    int No1 = 0, No2 = 0;
    printf("\n Enter 2 Numbers = ");
    scanf("%d%d",&No1,&No2);

    if(No1==No2)
    {
        printf("\n Both Numbers Are Given Equal");
    }
    else if(No1>No2)
    {
        printf("\n %d is Maximum", No1);
    }
    else
    {
        printf("\n %d is Maximum", No2);
    }
    getch();
    return 0;
}
