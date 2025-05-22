#define _CRT_SECURE_NO_WARNINGS // 보안 경고 무시
#include <stdio.h> //입력과 출력을 위한 헤더파일
#include <string.h> //문자열을 위한 헤더파일
int main()
//{
//	char string[80]; //문자열을 저장할 배열 선언
//
//	strcpy(string, "Hello world from "); //복사
//	strcat(string, "strcpy"); //끝에 붙여넣는다.
//	strcat(string, "and");
//	strcat(string, "strcat!"); 
//	printf("string=%s\n", string);
//	return 0; //정상 종료
//}
{
	char a[11] = "KOREA";//null(\0) 채워짐
	char b[] = "12345"; //6개 요소 갖는 배열

	strcat(a, b); //a에 b를 붙인다.

	puts(a); //a를 출력한다.

	printf("%s", b);
	return 0; //정상 종료
}