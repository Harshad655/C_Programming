#include<stdio.h>
#include<conio.h>

int main()

{
    int Number =0;

    printf("\n Enter The Number ");
    scanf("%d",&Number);

(Number == 0) ? printf("The Given Number is Neutral.\n") : ((Number % 2 == 0) ? printf("The Given Number is Even.\n") : printf("Given Number is Odd."));
    getch();
    return 0;
}
