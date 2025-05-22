#include <stdio.h> //입력과 출력을 위한 헤더파일

int main()
{
	int i;
	char menu[5][10]= {
		//문자열을 저장할 배열 선언
			"init",
			"open",
			"close",
			"read",
			"write"
	};

	for (i = 0; i < 5; i++) {
		printf("%d번째 메뉴를 입력하세요: ", i ,menu[i]);
		
	}
	return 0; //정상 종료
}