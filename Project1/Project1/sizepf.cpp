#include <stdio.h>
/*
  ㅁ sizeof 연산자
   : 자료형의 메모리(바이트 수)를 알려주는 연산자 입니다.
   
   ex) int 형 = 8bit*4 = 32bit (4byte)
    
   ㅁ 2-4 중복 사용 피하기 : 변수선언 과 동시에 초기화

   ㅁ 2-5 컴퓨터는 얼마나 큰 숫자를 저장할수 있을까 : 변수의 저장 범위

  자료형마다 메모리를 사용하는 bㅑt의 크기가 있는데 이를 2진수로 저장 가능한 숫자의 범위를 나타낸다
  ex) int 4byte는 32bit n비트로 저장 가능한 숫자의 범위를 알 수 있는데
  
  */
int main()
{
	printf("interger가 사용하는 메모리의 공간dms %d 바이트입니다\n", sizeof(int));
	printf("char가 사용하는 메모리의 공간은 %d 바이트입니다\n", sizeof(char));
	printf("float가 사용하는 메모리의 공간은 %d 바이트입니다\n", sizeof(float));

	//int a = 5; //선언과 초기화를 동시에 한다
	//int b, c;
	//int y = 4, x, z; // 한줄로 선언가능
	
	int a, b, c, d;

	a = 2147153647;
	b = 2147483648;
	c = -2147483648;
	d = -2147483649;
	
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	printf("d = %d\n", d);
	
	
	return 0;

}