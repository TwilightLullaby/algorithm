#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
int main(void) {
	//	srand(time(NULL));
	//int num = rand() % 3;
	int Me;
	printf("������ 0 ������ 1 ���� 2 ���߿� �����Ͻʽÿ�\n");
	scanf_s("%d", &Me);
	switch (Me)
	{
		case 0:printf("����\n");
			break;
		case 1:printf("����\n");
			break;
		case 2:printf("��\n");
			break;
	}
	
	return 0;
}