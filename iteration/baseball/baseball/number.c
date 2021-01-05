#include <stdio.h>
#include <time.h> 
#include <stdlib.h> //rand 함수사용
int main(void){
	srand(time(NULL));//실시간
	int num = rand() % 100 + 1; //1~100 랜덤한 수를 뽑는다  
	int answer, count=0; //정답, 시도한횟수
	int chance=5; //기회 (선택)
	while(1)
	{
		printf("숫자를 맞혀보세요 (1~100)\n");
		printf("----남은 기회 %d번----\n\n\n\n", chance);
		scanf_s("%d", &answer);
		if (num < answer)
		{
			printf("제시한 숫자보다 큽니다\n");
		}

		else if (num > answer)
		{
			printf("제시한 숫자보다 작습니다\n");
		}
		else if (answer == num) {
			printf("축하합니다 정답입니다\n");
			printf("시도 횟수 %d번\n", count);
			break;
		}
		else {
			printf("알수없는 오류입니다\n");
		}
		count++;
		chance--;
		if (chance == 0) {
			printf("기회를 다 소진하였습니다\n");
			printf("정답은 %d입니다\n", num);
			break;
		}
	}
	return 0;
}