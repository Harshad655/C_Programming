//Write a program which accept radius of circle from user and calculate its Circumference. Consider value of PI as 3.14. (Circumference = 2 * PI * Radius)

#include <stdio.h>
#include <conio.h>

int main() {

    float Rad = 0.0;
    const float PI = 3.14;
    printf("Enter Radius is Circle: ");
    scanf("%f",&Rad);

    printf("Circumference of Circle is %f ",2*PI*Rad);

    getch();
    return 0;
}
