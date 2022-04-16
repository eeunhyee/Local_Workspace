#include <stdio.h>
void swap(int x, int y)
{
    int temp=x;
    x=y;
    y=temp;
}

int main()
{
    int a=1, b=2;
    swap(a,b);

    return 0;
}
/*
값에 의한 호출은 인자를 매개변수로 복사해서 전달한다.
매개변수 x,y는 각각 인자 a,b의 복사본이다. 
따라서 함수 안에서 복사본인 x,y를 변경해도 a,b값은 변경되지 않는다.
swap함수는 값에 의한 호출로는 구현할 수 없다.
함수를 호출한 곳에 있는 변수를 함수 안에서 직접 변경하려면 참조의 의한 호출을 해야 한다.
*/