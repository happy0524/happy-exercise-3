/*
1. 시작하기 버튼
2. 1,2,3,4 번 중에 2개 , 3개 , 4개 선택을 3회차까지 반복 후 정답 맞추기
3. 조합 중에 정답이 있으면 정답이라는 문구 출력
4. 만약 1개만 선택했을 때 정답이면 게임 종료
5. 만약 1개만 선택했는데 정답이 아니면 다시 게임 진행
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	srand(time(NULL));
	int treatment = rand() % 4;
	printf("\n\n === Growing Up Game === \n\n");
	int cntshowbottle = 0;
	int prevshowbottle = 0;

	int bottle[4] = { 0,0,0,0 };

	for (int i = 1; i <= 3; i++) {
		do {
			cntshowbottle = rand() % 2 + 2;
		} while (cntshowbottle == prevshowbottle);
		prevshowbottle = cntshowbottle;
		printf("> %d번째 테스트 : ", i);
	}

	int isincluded = 0;

	for (int j = 0; j <= cntshowbottle; j++) {
		int randbottle = rand() % 4;
		if (bottle[randbottle] == 0) {
			bottle[randbottle] = 1;
			if (randbottle == treatment) {
				isincluded = 1;
			}
		}
		else {
			j--;
		}
	}

	for (int k = 0; k < 4; k++) {

		if (bottle[k] == 1) {
			printf("%d" , k+1);
		}
		printf("빈 물약을 머리에 바릅니다.\n\n");
	}
	if (isincluded == 1) {
		printf(">>성공? 머리카락이 났어요!!\n");
	}
	else {
		printf("실패! 머리카락이 나지 않았어요. ㅜㅜ\n");
	}
	printf("\n	계속하려면 ENTER를 누르세요.\n");
	getchar();

	printf("\n\n 발모제는 몇 번일까요?");
	int answer;
	scanf_s("%d", &answer);
	if (answer == treatment + 1) {
		printf("\n >> 정답입니다!\n");
	}
	else {
		printf("\n>> 떙 ! 틀렸어요, 정답은 %d번입니다.\n", treatment + 1);
	}

	return 0;
}