#define _CRT_SECURE_NO_WARNINGS // ���� ��� ����
#include <stdio.h> //�Է°� ����� ���� �������
#include <string.h> //���ڿ��� ���� �������
int main()
//{
//	char string[80]; //���ڿ��� ������ �迭 ����
//
//	strcpy(string, "Hello world from "); //����
//	strcat(string, "strcpy"); //���� �ٿ��ִ´�.
//	strcat(string, "and");
//	strcat(string, "strcat!"); 
//	printf("string=%s\n", string);
//	return 0; //���� ����
//}
{
	char a[11] = "KOREA";//null(\0) ä����
	char b[] = "12345"; //6�� ��� ���� �迭

	strcat(a, b); //a�� b�� ���δ�.

	puts(a); //a�� ����Ѵ�.

	printf("%s", b);
	return 0; //���� ����
}