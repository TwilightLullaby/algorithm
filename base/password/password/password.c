#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int random(int level);
void Quest(int level, int num1, int num2);
void succes();
void fail();
int main(void) {
	srand(time(NULL));
	int count = 0;

	for (int i = 1; i < 5; i++) {
		int num1 = random(i);
		int num2 = random(i);
		//printf("%dx%d ?", num1, num2);
		Quest(i, num1, num2);
		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1) {
			printf("프로그램을 종료합니다\n");
			exit(0);
		}
		else if (answer == num1 * num2) {
			succes();
			count++;
		}
		else {
			fail();
		}
	}
	printf("축하합니다 당신은 5개의 문제중 %d개를 맞췄습니다 \n", count);
	return 0;
}
int random(int level) {
	return level = rand() % (level * 7) + 1;
}
void Quest(int level, int num1, int num2)
{
	printf("\n\n######## %d번째 비밀번호 ########\n", level);
	printf("\n\t%dx%d는? \n\n", num1, num2);
	printf("################################\n");
	printf("비밀번호를 입력하세요  (종료:-1)");
}
void succes() {
	printf("정답입니다\n");
}
void fail() {
	printf("틀렸습니다\n");
}