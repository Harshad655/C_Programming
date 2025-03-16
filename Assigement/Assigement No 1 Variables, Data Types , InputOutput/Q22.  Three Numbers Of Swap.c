#include<stdio.h>
#include<conio.h>

int main()
{
    int m=0, n=0, o=0, p=0;

    printf("Enter First Number: ");
    scanf("%d",&m);

    printf("Enter Second Number: ");
    scanf("%d",&n);

    printf("Enter Third Number: ");
    scanf("%d",&o);

    p=m;
    m=n;
    n=o;
    o=p;

    printf("First Number is: %d \n",m);
    printf("Second Number is: %d \n",n);
    printf("Third Number is: %d \n",o);

    getch();
    return 0;
}
