#include <stdio.h>
/*
  �� sizeof ������
   : �ڷ����� �޸�(����Ʈ ��)�� �˷��ִ� ������ �Դϴ�.
   
   ex) int �� = 8bit*4 = 32bit (4byte)
    
   �� 2-4 �ߺ� ��� ���ϱ� : �������� �� ���ÿ� �ʱ�ȭ

   �� 2-5 ��ǻ�ʹ� �󸶳� ū ���ڸ� �����Ҽ� ������ : ������ ���� ����

  �ڷ������� �޸𸮸� ����ϴ� b��t�� ũ�Ⱑ �ִµ� �̸� 2������ ���� ������ ������ ������ ��Ÿ����
  ex) int 4byte�� 32bit n��Ʈ�� ���� ������ ������ ������ �� �� �ִµ�
  
  */
int main()
{
	printf("interger�� ����ϴ� �޸��� ����dms %d ����Ʈ�Դϴ�\n", sizeof(int));
	printf("char�� ����ϴ� �޸��� ������ %d ����Ʈ�Դϴ�\n", sizeof(char));
	printf("float�� ����ϴ� �޸��� ������ %d ����Ʈ�Դϴ�\n", sizeof(float));

	//int a = 5; //����� �ʱ�ȭ�� ���ÿ� �Ѵ�
	//int b, c;
	//int y = 4, x, z; // ���ٷ� ���𰡴�
	
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