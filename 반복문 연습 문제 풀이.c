

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num;
	int sum = 0;

	for (int i = 1; i < 200; i++) {
		if (i % 4 == 0) {
			continue;
		}
		sum += i;
	}

	int sum_sevenNum = 0;
	int num_sevens = 0;
	int nineseven;

	for (int k = 1; k < 200; k++) {
		if (k % 7 == 0) {
			sum_sevenNum += k;
		}
		if (k % 7 == 0) {
			num_sevens++;
		}
	}

	for (int k = 1; k < 200; k++) {
		if (k % 7 == 0 && k % 9 == 0) {
			nineseven = k;
			break;
		}
	}

	int number = 1;
	int sumnum = 0;
	int sevennum = 0;

	while (number < 200) {
		if (number % 7 == 0) {
			sumnum += number;
			sevennum++;
		}
		number++;
	}

	int key = 1;
	int ninseven = 0;
	int cool;

	printf("찾을 배수를 입력하세요 : ");
	scanf("%d", &cool);

	while (key < 200) {

		if (key % 7 == 0 && key % cool == 0) {
			ninseven = key;
			break;
		}
		key++;
	}

	printf("Question multiful of four : %d\n\n", sum);

	printf("Question by for loop 1 : %d\n" , sum_sevenNum);
	printf("Question by for loop 2 : %d\n", num_sevens);
	printf("Question by for loop 3 : %d\n\n", nineseven);

	printf("Question by while loop 1 : %d\n", sumnum);
	printf("Question by while loop 2 : %d\n", sevennum);
	printf("Question by while loop 3 : %d\n", ninseven);

	return 0;;

}

/*

int main(void) {
	
	int rank = 2, m = 0;

	switch (rank) {

	case 1: m = 300;
		break; 

	case 2 : m = 200;
		break;
	
	case 3 : m = 100;
		break;

	default:
		m = 10;
		break;
	}

	printf("%d", m);

	return 0;
}

*/

/*
	printf("%d\n", 10);
	printf("%lf\n", 3.4);
	printf("%.1lf\n", 3.45);
	printf("%.10lf\n", 3.4);

	printf("%d와 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);
	*/

	/*int kor = 3;
	int eng = 5;
	int mat = 4;
	int credits = kor + eng + mat;

	double kscore = 3.8;
	double escore = 4.4;
	double mscore = 3.9;
	double grade = (kscore + escore + mscore) / 3;

	int res = (credits >= 10) && (grade > 4.0);

	printf("%d", res);*/

