#include <stdio.h>
int main()
{
    float marks;
    printf("Enter the marks obtained in examination:\n");
    scanf("%f", &marks);

    if (marks>=35)
    {
        printf("CONGRATULATIONS!You have passed in the EXAMINATION");
    }
    else if (marks<35)
    {
        printf("YOU have failed in the EXAMINATION, BETTER LUCK NEXT TIME!");
    }

    return 0;
}
