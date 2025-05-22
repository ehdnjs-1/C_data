#define _CRT_SECURE_NO_WARNINGS // 보안 경고 무시
#include <stdio.h> //입력과 출력을 위한 헤더파일
#include <string.h> //문자열을 위한 헤더파일
int main()
{
	char name[10]; //문자열을 저장할 배열 선언
	char address[30]; //문자열을 저장할 배열 선언
	char search[10]; //문자열을 저장할 배열 선언
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("이름 %d:", i + 1);
		scanf("%s", name[i]);
	}
	printf("주소 %d:", i + 1);
	scanf("%s", address[i]);

//검색할 이름 입력받음
	printf("검색할 이름을 입력하세요: ");
	scanf("%s", search);
	for (i = 0; i < 5; i++)
	{
		if (strcmp(name[i], search) == 0)
		{
			printf("%s의 주소는 %s입니다.\n", name[i], address[i]);

		}
		printf("찾는 이름이 없습니다.\n");
		return 0;

	}