#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void call_value(int icopy);
void call_refer(int* ip); //�ּ� ȣ��
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
	//icopy<-777
	icopy = 888;
}

void call_refer(int* ip) //ip�� i�� �ּҸ� ����Ŵ

	//ip<-&i
	//*(ip) = 777;
	//*(ip) = 888;
	//ip = 888; //�ּҸ� �ٲ����
	//*ip = 777; //i�� ���� �ٲ�

{
	*ip = 888;
}