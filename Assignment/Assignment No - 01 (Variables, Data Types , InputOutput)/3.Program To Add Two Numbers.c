//Create a program to add two numbers provided by the user and display the result

#include<stdio.h>
#include<conio.h>


int main()
{
    int No1 = 0, No2 = 0, Add = 0;

    printf("Enter 2 Numbers : \n");
    scanf("%d%d",&No1,&No2);

    printf("Addition of Given Numbers is %d + %d = %d",No1,No2,No1 + No2);

    getch();
    return 0;
}
