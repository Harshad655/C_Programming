#include<stdio.h>
#include <conio.h>

int main()
{
    int N1 = 0, N2 = 0;

    printf("/n Enter 1st Number= ");
    scanf("%d",&N1);
    printf("/n Enter 2nd Number= ");
    scanf("%d",&N2);

    if(N1 > N2)
    {
        printf("/n 1st Number is Maximum ");
    }
    else
    {
        printf("/n 2nd Number is Maximum ");
    }

    getch();
    return 0;
}
