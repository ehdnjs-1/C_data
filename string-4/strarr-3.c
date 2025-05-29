#define page 5//기호상수 5라는 숫자를 page로 사용하겠다.
#define _CRT_SECURE_NO_WARNINGS//보안경고를 무시하겠다
#include <stdio.h>//표준 입출력 헤더파일
#include <string.h>//문자열 헤더파일
int main(void)
{
	int i, index;// i는 반복문용, index는 찾은 단어의 인덱스용 변수
	char dic[page][2][30] = {
		{"book","책"},
		{"boy","소년",},
		{"computer","컴퓨터"},
		{"apple","사과"},
		{"rain","비"}, };//사전의 단어와 뜻을 저장하는 2차원 배열 dic 선언, page(5)행, 2열, 각 열은 30글자까지 저장 가능
	char word[30];//단어를 입력받을 배열
	printf("단어를 입력하시오: ");//사용자에게 단어를 입력하라는 메시지를 출력한다.
	scanf("%s", word);//사용자로부터 단어를 입력받는다.
	for (i = 0; i < page; i++)//page(5)번 반복한다. 사전의 단어 개수만큼 반복한다.
	{
		if (strcmp(dic[i][0], word) == 0)//사전의 단어와 입력한 단어를 비교한다.
		{
			printf("%s:%s\n", word, dic[i][1]);//입력한 단어와 사전에서 찾은 단어의 뜻을 출력한다.
			return 0;//찾은 단어를 출력하고 프로그램을 종료한다.
		}
	}
	printf("사전에서 발견되지 않았습니다.\n");//사전에서 발견되지 않았다는 메시지를 출력한다.
}