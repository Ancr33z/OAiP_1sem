#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void massiy();
void matrix();

int main(void)
{
	int choose;

	setlocale(LC_ALL, "Rus");
	do {
		printf("Выберете какую задачу решить\n");
		printf("Задачу с массивами (1)\n");
		printf("Задачу с матрицами (2)\n");
		printf("Выход (3)\n");

		scanf_s("%d", &choose);
		switch (choose) {
		case 1: massiy(); break;

		case 2: matrix(); break;

		case 3: break;
		}
	} while (choose != 3);
}

void massiy() {
	int* N = (int*)malloc(0);
	int count = 0, i, n, k = -1;
	printf("Введите размер массива: ");
	scanf_s("%d", &n);
	printf("Введите элементы массива: ");
	do
	{
		N = (int*)realloc(N, sizeof(int) * ++count);
		scanf_s("%d", &N[count - 1]);
	} while (count < n);

	for (i = 0; i < count; i++) {
		if (N[i] < 0) {
			k = i;
		}
	}
	if (k != -1) {
		printf("Отрицательные элементы есть, наибльшее k = %d\n", k + 1);
	}
	else {
		printf("Отрицательных нету(\n");

	}
	free(N);
}
void matrix() {
	
	int* N, count = 0, i, j, n, k = -1, max = 0, maxposC, maxposR, tmp;
	N = new int[5*4];

	for (i = 0; i < 5; i++)
		for (j = 0; j < 4; j++)
		{
			printf("Введите элемант %d -й строки %d -го столбца ", i + 1, j + 1);
			cin >> *(N + i * 4 + j);
		}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", *(N + i * 4 + j));
		}
		printf("\n");
	}
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			if (*(N + i * 4 + j) > max) {
				max = *(N + i * 4 + j);
				maxposC = j;
				maxposR = i;
			}
		}
	}

	if (maxposC != 0) {
		for (i = 0; i < 5; i++) {
			tmp = *(N + i * 4);
			*(N + i * 4) = *(N + i * 4 + maxposC);
			*(N + i * 4 + maxposC) = tmp;
		}
	}
	if (maxposR != 0) {
		for (j = 0; j < 4; j++) {
			tmp = *(N + maxposR * 4);
			*(N + maxposR * 4) = *(N + j);
			*(N + j) = tmp;
		}
	}



	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", *(N + i * 4 + j));
		}
		printf("\n");
	}

}