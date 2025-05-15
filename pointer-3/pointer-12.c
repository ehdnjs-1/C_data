#include <stdio.h>
int main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	//a[0]주소 a[1]주소 a[2]주소 
	//a[0]값 a[1]값 a[2]값 
	
	//1. 주소&사용
	printf("%p %p %p \n", &a[0], &a[1], &a[2]);
	//2. 주소 a시작주소부터
	printf("%p %p %p \n", a, a + 1, a + 2);
	//3. 값 일반배열요소 값 예)a[0]
	printf("%d %d %d\n", a[0], a[1], a[2]);
	//4. 값 a시작주소부터 *이용
	printf("%d %d %d\n", *a, *(a + 1), *(a + 2));
	
	return 0;
	
}