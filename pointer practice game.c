/*

 << 해결해야 할 문제 >>

1. 어항은 6개, 어항 당 물고기 한 마리 
2. 레벨 하나가 오르는 시간은 20초
3. 레벨은 5까지
4. 레벨이 올라갈 수록 물 줄어드느 속도 빨라짐
5. 어항을 클릭하면 어항에 물 보충
6. 

*/

/*

 << 문제 해결 TIP >>

 1. 초기화해야 할 데이터 생각하기 

 2. 반복문을 언제 써야 하는지 잘 생각하자. 
 횟수 제한 있다 - for 
 횟수 제한 없다 - while / do while 

 3. 단계나 레벨이 정해진 게임은 한 단계가 지날 때마다 
 모든 값을 초기화할 수 있는 함수를 만들고 호출해야 한다.
 이 함수를 만들고 변수들을 만드는 것이 게임 제작의 첫 번째 단계.

 4. 사용자가 해야할 행동을 추적하지 말고 게임의 가장 낮은 기능부터 구현

*/


#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int level = 1;
arrayFish[6];
void initData();
void printFIshes();

int main(void) {
	long startTime = 0;
	int num;
	initData();
	startTime = clock();
	while (1) {
		printFIshes();
		printf("몇 번 어항에 물을 줄까요?(1~6)");
		scanf_s("%d", &num);
		if (num < 1 || num > 6) { // 오류 범위를 사용해 범위화
			printf("\n입력값이 잘못되었습니다.\n");
			continue;
		}
	}
	return 0;
}

void initData() { // 데이터들을 초기화시키는 역할의 함수

	level = 1; // 레벨 초기화(레벨 범위 : 1~5)
	
	for (int i = 0; i < 6; i++) { // 어항의 물 높이 초기화(물 높이 범위 : 0~100)
		arrayFish[i] = 100;
	}
	return;
}

void printFIshes() { // 어항 물 높이 출력하는 함수 (시각적인 부분 대신)

	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) {
		printf("  %3d ", arrayFish[i]);
	}
	printf("\n\n");
	return;
}