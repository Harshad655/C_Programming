//Write a program to find the maximum number among three given numbers provided by the user and display the result

#include<stdio.h>
#include<conio.h>

int main()
{
    int A = 0, B = 0, C = 0;
    printf("Enter 3 Numbers to check which Number is Max :\n\n");
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);

    if (A > B && A > C)
    {
        printf("Number 1 is Maximum");
    }
    else if (B > A && B > C)
    {
        printf("Number 2 is Maximum");
    }
    else
    {
        printf("Number 3 is Maximum");
    }
    getch();
    return 0;
}
