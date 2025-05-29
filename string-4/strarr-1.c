#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	
#include <stdlib.h>
int main()
{
	char ex[4][5] = { "abc","xyz","kkkk","love" };
	printf("%c\n", ex[1][2]);
	printf("%c\n", ex[3][3]);
	printf("%s\n", ex[1]);
	scanf("");
	printf("%c\n", ex[0][3]);
	printf("%s\n", ex[0]);
	return 0;
}