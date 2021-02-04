#include<stdio.h>
int main()
{
    int a;
    char b;
    long c;
    long long d;
    double e;
    long double f;
    printf("%zd,%zd,%zd,%zd,%zd,%zd",sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e),sizeof(f));
    return 0;
}
