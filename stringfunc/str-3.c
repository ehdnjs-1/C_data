#define _CRT_SECURE_NO_WARNINGS // ���� ��� ����
#include <stdio.h>
// stdio.h�� ����

//int main()
//{
//	int ch;//�������� ����
//	ch = getchar(); //���� �ϳ��� �Է¹޴´�
//	putchar(ch); //�Է¹��� ���ڸ� ����Ѵ�	
//
//	return 0; //���� ����
//}
int main()
{
	char name[100]; //���ڿ��� ������ �迭 ����
	char address[100]; //���ڿ��� ������ �迭 ����

	printf("�̸��� �Է��ϼ���: ");
	gets_s(name, sizeof(name)); //gets(name);

	printf("���� �����ϴ� �ּҸ� �Է��ϼ���: ");
	gets_s(address, sizeof(address)); //gets(address);

	puts(name);
	puts(address);

	return 0; //���� ����
}