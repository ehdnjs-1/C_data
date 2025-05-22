#define _CRT_SECURE_NO_WARNINGS // 보안 경고 무시
#include <stdio.h> //입력과 출력을 위한 헤더파일
#include <string.h> //문자열을 위한 헤더파일

int main()
{
	char key[] = "C";
	char buffer[80] = "";

	do {
		printf("임베디드 장치에 가장 많이 사용되는 언어는?");
		gets(buffer); //gets(buffer);
	} while (strcmp(key, buffer) != 0); //key[0]이 buffer에 없을 때까지 반복

	printf("정답입니다.\n");

	return 0; //정상 종료
}