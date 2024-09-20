#include<stdio.h>
#include<conio.h>

int main()

{
    int Num =0;
    printf("Enter An Integer Number ");
    scanf("%d",&Num);

    (Num>0)? (printf("\n The Given Number is %d positive ",Num)): (printf("\n The Given Number is %d Negative ",Num));

    getch();

    return 0;
}
