#define _CRT_SECURE_NO_WARNINGS // ���� ��� ����
#include <stdio.h> //�Է°� ����� ���� �������
#include <string.h> //���ڿ��� ���� �������

int main()
{
	char key[] = "C";
	char buffer[80] = "";

	do {
		printf("�Ӻ���� ��ġ�� ���� ���� ���Ǵ� ����?");
		gets(buffer); //gets(buffer);
	} while (strcmp(key, buffer) != 0); //key[0]�� buffer�� ���� ������ �ݺ�

	printf("�����Դϴ�.\n");

	return 0; //���� ����
}