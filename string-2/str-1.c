#define _CRT_SECURE_NO_WARNINGS //오류를 막아주는것
#include <stdio.h>
//int main()
//{
//	char str1[6] = "Seoul";
//	char str2[3] = { 'i','s','\0' };
//	char str3[] = "the capital city of Korea.";
//	printf("%s %s %s\n", str1, str2, str3);
//	return 0;
//}
int main()
{
	int i;
	char str[6];
	str[0] = 'K';
	str[1] = 'O';
	str[2] = 'R';
	str[3] = 'E';
	str[4] = 'A';
	for (i = 0; i < 5; i++) {//0 1 2 3 4
		printf("%c", str[i]);
	}
	return 0;
}