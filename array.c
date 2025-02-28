/*
1. �����ϱ� ��ư
2. 1,2,3,4 �� �߿� 2�� , 3�� , 4�� ������ 3ȸ������ �ݺ� �� ���� ���߱�
3. ���� �߿� ������ ������ �����̶�� ���� ���
4. ���� 1���� �������� �� �����̸� ���� ����
5. ���� 1���� �����ߴµ� ������ �ƴϸ� �ٽ� ���� ����
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
		printf("> %d��° �׽�Ʈ : ", i);
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
		printf("�� ������ �Ӹ��� �ٸ��ϴ�.\n\n");
	}
	if (isincluded == 1) {
		printf(">>����? �Ӹ�ī���� �����!!\n");
	}
	else {
		printf("����! �Ӹ�ī���� ���� �ʾҾ��. �̤�\n");
	}
	printf("\n	����Ϸ��� ENTER�� ��������.\n");
	getchar();

	printf("\n\n �߸����� �� ���ϱ��?");
	int answer;
	scanf_s("%d", &answer);
	if (answer == treatment + 1) {
		printf("\n >> �����Դϴ�!\n");
	}
	else {
		printf("\n>> �� ! Ʋ�Ⱦ��, ������ %d���Դϴ�.\n", treatment + 1);
	}

	return 0;
}