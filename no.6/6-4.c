#include<stdio.h>
#include<stdlib.h>

int sqr(int x)
{
    return x*x;
}

int pow4(int x)
{
    return sqr(sqr(x));
}

int main()
{
    int a;
    int b;
    scanf("%d", &a);
    b = pow4(a);
    printf("%d\n", b);
    system("pause");
    return 0;
}