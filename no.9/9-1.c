#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[] = "ABC\0DEF";

    printf("字符串 str 为 \"%s\"。\n", str);

    system("pause");
    return 0;
}