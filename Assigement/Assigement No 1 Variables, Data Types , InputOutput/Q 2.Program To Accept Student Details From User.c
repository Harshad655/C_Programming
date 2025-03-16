#include<stdio.h>
#include<conio.h>

int main()
{
    char name [50]="";
    int Roll_No=0;
    char course[30]="";
    char city[15]="";

    printf("Enter Student Name : ");
    scanf("%s",name );

    printf("Enter Roll Number : ");
    scanf("%d",&Roll_No);

    printf("Enter Course Name : ");
    scanf("%s",city);

    printf("Enter City Name : ");
    scanf("%s",course);

    printf("Student Name: %s \n",name);
    printf("Roll No.: %d \n",Roll_No);
    printf("Course: %s \n",course);
    printf("City: %s \n",city);

    getch();
    return 0;
}
