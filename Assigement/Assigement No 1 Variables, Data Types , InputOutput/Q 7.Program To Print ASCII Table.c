#include <stdio.h>
#include <conio.h>

int main() {

    int i = 0;
    for (i = 0; i < 128; i++)
    {
        printf("%d  ", i);
        if (i >= 32 && i <= 126)
        {
            printf("%c\n", i);
        }
        else
        {
            printf("  \n");
        }
    }

    getch();
    return 0;
}

