#include <stdio.h>
#include <conio.h>

int main() {

    float rad = 0.0;
    const float PI = 3.14;
    printf("Enter Radius is Circle: ");
    scanf("%f",&rad);

    printf("Circumference of Circle is %f ",2*PI*rad);

    getch();
    return 0;
}
