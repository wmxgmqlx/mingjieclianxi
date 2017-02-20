#include<stdio.h>
#include<stdlib.h>


int search_idx(const int v[], int idx[], int key, int n)
{
    int i = 0, j = 0;
    for (i = 0; i < n; i++)
    {
        if (v[i] == key)
        {
            idx[j] = i;
            j++;
        }
    }

    return j;
}

int main()
{
    int i, ky;
    int vx[7] = { 0 };
    int idx[7] = { 0 };


    for (i = 0; i < 7; i++)
    {
        printf("vx[%d]:", i);
        scanf("%d", &vx[i]);
    }

    printf("key的值为: ");

    scanf("%d", &ky);

    int sum = search_idx(vx, idx, ky, 7);
    for (i = 0; i < sum; i++)
    {
        printf("%d ", idx[i]);
    }

    printf("相等元素的个数为%d个。\n", sum);

    system("pause");
    return 0;
}


    

    