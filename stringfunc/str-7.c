#define _CRT_SECURE_NO_WARNINGS // ���� ��� ����
#include <stdio.h> //�Է°� ����� ���� �������
#include <string.h> //���ڿ��� ���� �������
int main()
{
	char name[10]; //���ڿ��� ������ �迭 ����
	char address[30]; //���ڿ��� ������ �迭 ����
	char search[10]; //���ڿ��� ������ �迭 ����
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("�̸� %d:", i + 1);
		scanf("%s", name[i]);
	}
	printf("�ּ� %d:", i + 1);
	scanf("%s", address[i]);

//�˻��� �̸� �Է¹���
	printf("�˻��� �̸��� �Է��ϼ���: ");
	scanf("%s", search);
	for (i = 0; i < 5; i++)
	{
		if (strcmp(name[i], search) == 0)
		{
			printf("%s�� �ּҴ� %s�Դϴ�.\n", name[i], address[i]);

		}
		printf("ã�� �̸��� �����ϴ�.\n");
		return 0;

	}