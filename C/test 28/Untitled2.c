#include <stdio.h>
int main()
{
    int x = 4;
    int y = 0;
    for (int a = 1; a <= x; a++)
    {
        for (int b = x; b > a; b--)
            printf(" ");
        for (int b = 1; b <= a; b++)
            printf("%d ", y += 2);

        printf("\n");
    }
    return 0;
}

