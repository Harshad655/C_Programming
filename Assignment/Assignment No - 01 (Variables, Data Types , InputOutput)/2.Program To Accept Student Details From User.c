//Write Program to accept student details from user as student name, roll number, course, city Display all information after accepting info using single print statement

#include<stdio.h>
#include<conio.h>

int main()
{
    char Name [50] = "";
    int Roll_No = 0;
    char Course [30] = "";
    char City [15] = "";

    printf("Enter Student Name : ");
    scanf("%s",Name );

    printf("Enter Roll Number : ");
    scanf("%d",&Roll_No);

    printf("Enter Course Name : ");
    scanf("%s",City);

    printf("Enter City Name : ");
    scanf("%s",Course);

    printf("Student Name: %s \n",Name);
    printf("Roll No.: %d \n",Roll_No);
    printf("Course: %s \n",Course);
    printf("City: %s \n",City);

    getch();
    return 0;
}
