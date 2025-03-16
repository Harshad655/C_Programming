#include <stdio.h>
#include <conio.h>

int main()
{
    int Subject1;
    int Subject2;
    int Subject3;

    printf("Mark in Subject 1 Marks ");
    scanf("%d",&Subject1);

    printf("Mark in Subject 2 Marks ");
    scanf("%d",&Subject2);

    printf("Mark in Subject 3 Marks ");
    scanf("%d",&Subject3);

    int total = Subject1 + Subject2 + Subject3;

    printf("percentage of Numbers %d \t",total / 3);

    getch();
    return 0;


}
