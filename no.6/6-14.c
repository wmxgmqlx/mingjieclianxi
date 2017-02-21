#include<stdio.h>
#include<stdlib.h>

int main()
{
    static double a[8];

    for (int i = 0; i < 8; i++)
    {
        printf("%.1lf ", a[i]);
    }
    printf("\n");
    system("pause");
    return 0;

}