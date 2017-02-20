#include<stdio.h>
#include<stdlib.h>

void alert(int n)
{
    while (n-- > 0)
    {
        printf("\a");
    }
}

int main()
{
    int a;
    a = 1;
    alert(a);
    system("pause");
    return 0;
}