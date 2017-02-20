#include<stdio.h>
#include<stdlib.h>

int min3(int a, int b, int c)
{
    int min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    return min;
}

int main()
{
    int x = 6;
    int y = 4;
    int z = 3;
    int m;
    m = min3(x, y, z);
    printf("%d\n", m);
    system("pause");
    return 0;
}