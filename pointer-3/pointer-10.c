#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
<<<<<<< HEAD
void call_value(int icopy);
void call_refer(int* ip); //주소 호출
=======
>>>>>>> 19c3c60cc4839b0b3dee76da6bf4430541cd757b
int main()
{
	int i = 777;
	call_value(i); //함수 호출
	printf("값 호출 : %d\n", i); //777

	call_refer(&i); //주소 호출 //i 주소
	printf("참조 호출 : %d\n", i); 
	return 0;
}

void call_value(int icopy)
{
<<<<<<< HEAD
	//icopy<-777
	icopy = 888;
}

void call_refer(int* ip) //ip가 i의 주소를 가리킴

	//ip<-&i
	//*(ip) = 777;
	//*(ip) = 888;
	//ip = 888; //주소를 바꿔버림
	//*ip = 777; //i의 값을 바꿈

=======
	icopy = 888;
}

void call_refer(int* ip)
>>>>>>> 19c3c60cc4839b0b3dee76da6bf4430541cd757b
{
	*ip = 888;
}