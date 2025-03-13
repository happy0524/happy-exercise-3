/*

 << �ذ��ؾ� �� ���� >>

1. ������ 6��, ���� �� ����� �� ���� 
2. ���� �ϳ��� ������ �ð��� 20��
3. ������ 5����
4. ������ �ö� ���� �� �پ��� �ӵ� ������
5. ������ Ŭ���ϸ� ���׿� �� ����
6. 

*/

/*

 << ���� �ذ� TIP >>

 1. �ʱ�ȭ�ؾ� �� ������ �����ϱ� 

 2. �ݺ����� ���� ��� �ϴ��� �� ��������. 
 Ƚ�� ���� �ִ� - for 
 Ƚ�� ���� ���� - while / do while 

 3. �ܰ質 ������ ������ ������ �� �ܰ谡 ���� ������ 
 ��� ���� �ʱ�ȭ�� �� �ִ� �Լ��� ����� ȣ���ؾ� �Ѵ�.
 �� �Լ��� ����� �������� ����� ���� ���� ������ ù ��° �ܰ�.

 4. ����ڰ� �ؾ��� �ൿ�� �������� ���� ������ ���� ���� ��ɺ��� ����

*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int level = 1;
arrayFish[6];
int* cursor;

void initData();
void printFIshes();
void decreaseWater(long elapsedTime);
int checkFishAlive();

int main(void) {
	long startTime = 0; // ���� �ð� 
	int num; // ���� �� ���� 
	long totalElapsedTime = 0; // �� ��� �ð� 
	long prevElapsedTime = 0; // �ֱ� ��� �ð� 
	initData(); // ����, ������ �� ���� �ʱ�ȭ 
	startTime = clock(); // �ð� ��� 

	cursor = arrayFish;

	while (1) {
		printFIshes(); // ���� �� ���� ���
		printf("�� �� ���׿� ���� �ٱ��?(1~6)");
		scanf_s("%d", &num);
		if (num < 1 || num > 6) { // ���� ������ ����� ����ȭ
			printf("\n�Է°��� �߸��Ǿ����ϴ�.\n");
			continue;
		}

		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;

		printf("�� ��� �ð� : %ld��\n", totalElapsedTime);
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("�ֱ� ��� �ð� : %ld", prevElapsedTime);
		decreaseWater(prevElapsedTime);

		if (cursor[num - 1] <= 0) {
			printf("%d�� ������ ������ �̹� �׾����Ƿ� ���� ���� �ʽ��ϴ�.\n", num);
		}
		else if (cursor[num - 1] + 1 <= 100) {
			printf("%d�� ���׿� ���� �ݴϴ�.\n\n", num);
			cursor[num - 1] += 1;
		}
		if (totalElapsedTime / 20 > level - 1) {
			level++;
			printf("***�����մϴ�. %d�������� %d������ �ö����ϴ�.***\n\n", level - 1, level);
			if (level == 5) {
				printf("***�����մϴ�.�ְ� ������ �޼��߽��ϴ�. ������ �����մϴ�.\n\n");
				exit(0);
			}
		}

		if (checkFishAlive() == 0) {
			printf("��� ����Ⱑ �׾����ϴ�.�̤�\n\n");
			exit(0);
		} else {
			printf("����Ⱑ ���� ��� �־��.\n\n");
		}
		prevElapsedTime = totalElapsedTime;
	}
	return 0;
}

void initData() { // �����͵��� �ʱ�ȭ��Ű�� ������ �Լ�

	level = 1; // ���� �ʱ�ȭ(���� ���� : 1~5)
	
	for (int i = 0; i < 6; i++) { // ������ �� ���� �ʱ�ȭ(�� ���� ���� : 0~100)
		arrayFish[i] = 100;
	}
	return;
}

void printFIshes() { // ���� �� ���� ����ϴ� �Լ� (�ð����� �κ� ���)

	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) {
		printf("  %3d ", arrayFish[i]);
	}
	printf("\n\n");
	return;
}

void decreaseWater(long elapsedTime) { // �ð��� ���� �پ��� ���� �� ���� �Լ�

	for (int i = 0; i < 6; i++) {

		arrayFish[i] -= (level * 3 * (int)elapsedTime);
		if (arrayFish[i] < 0) {
			arrayFish[i] = 0; // ���� �� �ٸ� ���� 0���� ����
		}
	}
	return;
}

int checkFishAlive() {
	for (int i = 0; i < 6; i++) {
		if (arrayFish[i] > 0) {
			return 1;
		}
	}
	return 0;
}