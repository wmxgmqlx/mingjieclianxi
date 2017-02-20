#include<stdio.h>
#include<stdlib.h>

int min_of(const int v[], int n)
{
    int min = v[0];
    for (int i = 0; i < n; i++)
    {
        if (v[i] < min)
            min = v[i];
    }
    return min;
}

int main()
{
    int a[5] = { 5, 8, 3, 1, 9 };
    int b[10] = { 6, 3, 90, 11, 5, 54, 14, 8, 9, 7 };
    int c = min_of(a, 5);
    printf("min of a is %d\n", c);
    int d = min_of(b, 10);
    printf("min of b is %d\n", d);
    system("pause");
    return 0;
    

}