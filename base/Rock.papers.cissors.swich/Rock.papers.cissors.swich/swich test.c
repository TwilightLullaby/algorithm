#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
int main(void) {
	//	srand(time(NULL));
	//int num = rand() % 3;
	int Me;
	printf("가위는 0 바위는 1 보는 2 셋중에 선택하십시오\n");
	scanf_s("%d", &Me);
	switch (Me)
	{
		case 0:printf("가위\n");
			break;
		case 1:printf("바위\n");
			break;
		case 2:printf("보\n");
			break;
	}
	
	return 0;
}