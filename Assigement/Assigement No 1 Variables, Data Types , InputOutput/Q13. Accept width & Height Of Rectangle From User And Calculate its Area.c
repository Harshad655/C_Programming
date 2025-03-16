#include<stdio.h>
#include<conio.h>

int main()
{
    float width=0.0;
    float height=0.0;

    printf("Enter Width is Rectangle: ");
    scanf("%f",&width);

    printf("Enter height is Rectangle: ");
    scanf("%f",&height);

    printf("Area of Rectangle is %f",width*height);

    getch();
    return 0;
}
