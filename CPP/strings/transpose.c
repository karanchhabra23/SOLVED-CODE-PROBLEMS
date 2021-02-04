#include <stdio.h>
#include <string.h>
#include<stdio.h>

int main()
{   int n;
    printf("enter n: ");
    scanf("%d",&n);
    int a[n][n];
    printf("enter the elements of original matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the transpose of the given matrix is:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

    return 0;
} 
