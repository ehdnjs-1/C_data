#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 10; //������ ������ �� 10����
	double f = 12.3; //�Ǽ��� ������ �� 12.3����
	int* pi = NULL; //������ ����(������ ������ �ּ� ���) ����
	// NULL�� �ּҰ� ������ �ǹ�	

	double* pf = NULL; //������ ����(�Ǽ��� ������ �ּ� ���) ����
	pi = &i; // i�� �ּҸ� pi�� ����
	pf = &f; // f�� �ּҸ� pf�� ����

	printf("%p %p \n", pi, pf); // pi�� pf�� �ּ� ���
	printf("%p %p \n", &pi, &pf); // pi�� pf�� �ּ� ���

	int k = 300;
	int y = 20;
	printf("%d\n", k); //300
	printf("%p\n", &k); //k�� �ּ�
	//������ ���� ���� po(�ƹ��ּҸ� ����Ű�� �ȵ�.)
	
	int* po = NULL; //NULL�� �ּҰ� ������ �ǹ�
	po = &y; //y�� �ּҸ� po�� ����
	printf("%p\n", po); //y�� �ּҸ� �������Ͽ� y�� �� ���
	printf("%d\n", *po); //y�� �ּҸ� �������Ͽ� y�� �� ���

	



	return 0;
	
}