#include <stdio.h>
int main()
{
	void proc(int a[], int b); // 함수 선언
	int a[6] = { 3,2,5,1,4,6 };
// a는 6개의 정수형 숫자를 저장할 수 있는 배열, b는 정수형 변수
// b는 1보다 크지 않은 정수형 변수
// a 배열은 정수형 4바이트* 6개=24바이트
// a[0]=3, a[1]=2, a[2]=5, a[3]=1, a[4]=4, a[5]=6
	
	proc(a, 0);//함수 호출(a 배열,0->넘김)
}
	void proc(int a[], int b)//정수형 숫자 배열
						//a배열-> 정수형 a[6], b는 0받음

	{
		int i;
		if (b > 1)//처음 b가 0이므로 참이 아님
		{
			return;//참일때 수행
		}
		else //b가 1보다 크지 않으므로
			for (i = 0; i < 6; i++)//5번 반복
				printf("%d", a[i]);
	}