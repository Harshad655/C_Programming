#include <stdio.h>
#include <conio.h>

int main()
{
    int Subject_1;
    int Subject_2;
    int Subject_3;

    printf("Subject 1 Marks: ");
    scanf("%d",&Subject_1);

    printf("Subject 2 Marks: ");
    scanf("%d",&Subject_2);

    printf("Subject 3 Marks: ");
    scanf("%d",&Subject_3);


    printf("Percentage of Numbers is %d \t", (Subject_1+Subject_2+Subject_3)/3);

    getch();
    return 0;
}

