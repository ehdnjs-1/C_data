#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 777;
	call_value(i); //�Լ� ȣ��
	printf("�� ȣ�� : %d\n", i); //777

	call_refer(&i); //�ּ� ȣ�� //i �ּ�
	printf("���� ȣ�� : %d\n", i); 
	return 0;
}

void call_value(int icopy)
{
	icopy = 888;
}

void call_refer(int* ip)
{
	*ip = 888;
}