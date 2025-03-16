#include<stdio.h>
#include<conio.h>

int main()
{
    float km =0.0;
    printf("Enter Distance in kilometer: ");
    scanf("%f",&km);

    printf("The distance of kilometer in meter is %fmeter",km*1000);

    getch();
    return 0;
}
