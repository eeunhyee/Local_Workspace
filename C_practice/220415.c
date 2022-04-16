
/*
int main과 void main의 차이점.
int main 사용시 return값을 무조건 작성해주어야 한다.
그러나 사용자들 중 이 반환값을 활용하는 일은 극히 드물다.
그래서 C에서 void main이라는 함수를 추가적으로 제공한 것이다.
void main함수를 지원하는 컴파일러는 점점 더 적어져서, int main함수를 디폴트로 사용하는 것이 낫다.

+) 반환값 활용 방법 https://blog.naver.com/tipsware/221255071329 
20220416 헤더 문제로 vscode 오류 뜸 수정
*/

// *연산자에 피연산자가 두개 있으면 곱셈 연산자(a*b)이고, 하나만 있으면 참조 연산자다.
#include <stdio.h>
int main(){
    
    int *p= NULL; //포인터p 초기화
    int num=15; //num에 값 대입. (변수 초기화)
    
    p=&num; //포인터에 num의 주소값 삽입.

    printf("포인터 p의 값:%d \n", p);
    printf("int 변수 num의 주소: %d \n", &num);
    //같은 값 두개가 나온다.
    printf("포인터 p가 가리키는 값: %d \n", *p);
    //*p는 p에 들어있는 주소로 가서 그 변수의 값을 가져오게 된다.
    //따라서 *p가 가리키는 값은 15가 출력된다.

    return 0;
}