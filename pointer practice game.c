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
		printf("�� �� ���׿� ���� �ٱ��?(1~6)");
		scanf_s("%d", &num);
		if (num < 1 || num > 6) { // ���� ������ ����� ����ȭ
			printf("\n�Է°��� �߸��Ǿ����ϴ�.\n");
			continue;
		}
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