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
			printf("���α׷��� �����մϴ�\n");
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
	printf("�����մϴ� ����� 5���� ������ %d���� ������ϴ� \n", count);
	return 0;
}
int random(int level) {
	return level = rand() % (level * 7) + 1;
}
void Quest(int level, int num1, int num2)
{
	printf("\n\n######## %d��° ��й�ȣ ########\n", level);
	printf("\n\t%dx%d��? \n\n", num1, num2);
	printf("################################\n");
	printf("��й�ȣ�� �Է��ϼ���  (����:-1)");
}
void succes() {
	printf("�����Դϴ�\n");
}
void fail() {
	printf("Ʋ�Ƚ��ϴ�\n");
}