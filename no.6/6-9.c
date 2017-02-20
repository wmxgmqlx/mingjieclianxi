#include<stdio.h>
#include<stdlib.h>

void rev_intary(int v[], int n)
{
    for (int i = 0; i < n/2; i++)
    {
        int temp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = temp;
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
    int a[5] = { 1, 2, 3, 4, 5 };
    int b[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
    print_array(a, 5);
    rev_intary(a, 5);
    print_array(a, 5);
    printf("\n");
    print_array(b, 10);
    rev_intary(b, 10);
    print_array(b, 10);
    system("pause");
    return 0;
        

}