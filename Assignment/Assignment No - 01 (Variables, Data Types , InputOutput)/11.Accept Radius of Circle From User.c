//Write a program which accept radius of circle from user and calculate its area. Consider value of PI as 3.14. (Area = PI * Radius * Radius)

#include <stdio.h>
#include <conio.h>

int main() {

    float Rad = 0.0;
    const float PI = 3.14;
    printf("Enter Radius is Circle: ");
    scanf("%f",&Rad);

    printf("Area of Circle is %f ",PI*Rad*Rad);
    printf("Area of Circle is %f ",PI*Rad*Rad);

    getch();
    return 0;
}

