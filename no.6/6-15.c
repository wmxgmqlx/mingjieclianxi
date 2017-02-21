#include<stdio.h>
#include<stdlib.h>

void put_count()
{
    static int count;
    count++;
    printf("put_count: %d\n", count);
}

int main()
{
    put_count();
    put_count();
    put_count();
    put_count();
    put_count();
    
    system("pause");
    return 0;

}