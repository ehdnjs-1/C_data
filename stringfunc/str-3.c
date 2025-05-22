#define _CRT_SECURE_NO_WARNINGS // 보안 경고 무시
#include <stdio.h>
// stdio.h에 선언

//int main()
//{
//	int ch;//정수형에 주의
//	ch = getchar(); //문자 하나를 입력받는다
//	putchar(ch); //입력받은 문자를 출력한다	
//
//	return 0; //정상 종료
//}
int main()
{
	char name[100]; //문자열을 저장할 배열 선언
	char address[100]; //문자열을 저장할 배열 선언

	printf("이름을 입력하세요: ");
	gets_s(name, sizeof(name)); //gets(name);

	printf("현재 거주하는 주소를 입력하세요: ");
	gets_s(address, sizeof(address)); //gets(address);

	puts(name);
	puts(address);

	return 0; //정상 종료
}