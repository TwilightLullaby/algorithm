#include <stdio.h>
#include <time.h> 
#include <stdlib.h> //rand �Լ����
int main(void){
	srand(time(NULL));//�ǽð�
	int num = rand() % 100 + 1; //1~100 ������ ���� �̴´�  
	int answer, count=0; //����, �õ���Ƚ��
	int chance=5; //��ȸ (����)
	while(1)
	{
		printf("���ڸ� ���������� (1~100)\n");
		printf("----���� ��ȸ %d��----\n\n\n\n", chance);
		scanf_s("%d", &answer);
		if (num < answer)
		{
			printf("������ ���ں��� Ů�ϴ�\n");
		}

		else if (num > answer)
		{
			printf("������ ���ں��� �۽��ϴ�\n");
		}
		else if (answer == num) {
			printf("�����մϴ� �����Դϴ�\n");
			printf("�õ� Ƚ�� %d��\n", count);
			break;
		}
		else {
			printf("�˼����� �����Դϴ�\n");
		}
		count++;
		chance--;
		if (chance == 0) {
			printf("��ȸ�� �� �����Ͽ����ϴ�\n");
			printf("������ %d�Դϴ�\n", num);
			break;
		}
	}
	return 0;
}