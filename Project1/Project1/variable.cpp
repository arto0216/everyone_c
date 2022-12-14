#include <stdio.h>
/* 
  2장 기억 상자 만들기 - 변수

  ㅁ2-1 숫자 상자 만들기 : 자료형
  우리는 프로그래밍을 하기위해 값을 저장해 놓기도 하고, 저장된 값을 가져와서 다시
  사용하기도 해야합니다.
  여기서 "값을 저장한다"는 말은 컴퓨터에 있는 하드웨어인"메모리(memory)"에 저장한다는 의미입니다

  - 컴퓨터는 모든 정보를 0과1, 즉 2진수 체계로 저장합니다.
  - 컴퓨터에서 숫자나 문자로 구성된 정보의 값을 저장하려면 정보의 최소 저장 단위인 비트(bit)를 사용합나다.

  ㅁ정수(int) : 소수점이 없는 숫자(-10, 30, 100 등등)
  ㅁ실수 : 소수점이 있는 숫자(10.4, 3,14, 100,3 하지만 실수는 정수도 포함한다)

  ㅁ변수 : 메모리에 자료형을 지정해 저장하는 것을 변수라고한다.
          (책의 내용에서 처럼 상자를 만든다는 것은 변수를 만든 다는것을 의미하고
           "변수를 선언한다" 라고한다)
  ㅁ 변수의 선언
    -int a;
-----------------------------------------------------------------------------------------

  ㅁ2-2 메모리 상자에 숫자저장하기 : 변수 선언과 초기화 
   
   아래와 같이 '='의 연산자는 컴퓨터에서 "같다"가 아니라 "대입"의 의미로 봅니다
   그렇기에 "10을 age에 저장 또는 할당, 대입한다라고 생각하면 된다

   - int age; = 10;


  ㅁ2-3 메모리 상자에서 숫자 꺼내서 사용하기 : 서식 지정자
   ㅁ 서식 지정자란, 문자 그대로 출력되지 않고 해당하는 변수의 값이 화면에 출력된다(%d, %c등등)
    (콤마(,) 뒤에 변수 또는 상수를 지정해 준다)
   ㅁ 서식 지정자는 해당하는 자료형을 맞춰어야 합니다.
    ex) %d는 정수형(decimal(10진수)으로 '10진수로 값을 출력하겠다'는 의미입니다.


*/

int main3()
{    
   int a,b;    // 정수형 변수 a를 선언하여 저장 공간을 확보(선언하다)
   int age;   // 정수형 변수를 age를 선언하여 저장공간을 확보한다
   age = 27;
   a = 5;
   b = 10;    // 확보된 공간에 숫자 5를 저장(초기화하다)
   printf("%d+%d = %d", a,b,a+b); //변수 a에 저장되어 있는 숫자 5를 화면에 출력
   printf("내 나이는 %d입니다", age);
   
   printf("강아지의 몸무게는 %d킬로그램입니다\n", 5.5f);//오류! 제대로 출력되지 않음
   //(이유 자료형이 맞지 않기 때문이다)
   return 0;
}

