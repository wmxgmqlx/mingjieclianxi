#include<stdio.h>
#include<stdlib.h>

void intary_copy(int v1[], const int v2[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        v1[i] = v2[n - 1 - i];
    }
}

void print_array(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main()
{
    int a[10] = { 5, 7, 9, 1, 2, 4, 5, 7, 0, 1 };
    int b[10] = { 0 };
    print_array(a, 10);
    print_array(b, 10);
    printf("\n");
    intary_copy(b, a, 10);
    print_array(b, 10);
    system("pause");
    return 0;
}