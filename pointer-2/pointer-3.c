#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // ���Ĵٵ� ����� ��� ����

int main() // main �Լ� ����
{
	int i = 10; // ������ ���� i ���� �� �ʱ�ȭ
	double f = 12.3; // �Ǽ��� ���� f ���� �� �ʱ�ȭ
	int* pi = NULL; // ������ ������ pi ���� �� �ʱ�ȭ

	double* pf = NULL; // �Ǽ��� ������ pf ���� �� �ʱ�ȭ
	pi = &i; // pi ������ ������ i�� �ּҸ� ����
	pf = &f; // pf ������ ������ f�� �ּҸ� ����
	
	
	printf("%p %p %d\n", pi, &i, i); // 
	printf("%p %p %.1f\n", pf, &f, f); // 
	return 0;
}