#include<stdio.h>
#include<stdlib.h>

int min2(int x, int y)
{
    int min;
    if (x > y)
        min = y;
    else
        min = x;
    return min;
}

int main()
{
    int a = 3;
    int b = 1;
    int c;
    c = min2(a, b);
    printf("%d\n", c);
    system("pause");
    return 0;

}