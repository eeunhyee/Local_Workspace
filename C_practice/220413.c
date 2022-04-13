//포인터 복습 및 실습

#include <stdio.h>

int main()
{
    int a=0;
    int *p = &a;
    *p=20;
    printf("*p=%d\n", *p );
}