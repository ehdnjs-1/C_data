#include <stdio.h> //�Է°� ����� ���� �������

int main()
{
	int i;
	char menu[5][10]= {
		//���ڿ��� ������ �迭 ����
			"init",
			"open",
			"close",
			"read",
			"write"
	};

	for (i = 0; i < 5; i++) {
		printf("%d��° �޴��� �Է��ϼ���: ", i ,menu[i]);
		
	}
	return 0; //���� ����
}