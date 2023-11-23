#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	int i, size, n, countA = 0, countB = 0, t;
	int A[999], B[999];
	int min = -99;
	int max = 99;
	int range = max - min + 1;
	printf("Введите количество элементов(n)");
	scanf_s("%d", &n);
	size = n;
	srand(time(NULL));
	printf("Введите t: ");
	scanf_s("%d", &t);

	for (i = 0; i < size; i++) {
		*(A + i) = (rand() % range) + min;
		printf("%d ", *(A + i));
	}

	printf("\n");
	for (i = 0; i < size; i++) {
		*(B + i) = (rand() % range) + min;
		printf("%d ", *(B + i));
	}

	for (i = 0; i < size; i++) {
		if (t > *(A + i)) {
			countA++;
		}
		if (t > *(B + i)) {
			countB++;
		}
	}
	printf("\n");
	printf("Количество чисел меньше значения t в массиве А: %d\n", countA);
	printf("Количество чисел меньше значения t в массиве B: %d\n", countB);
	if (countA > countB) {
		for (i = 0; i < size; i++) {
			printf("%d ", *(A + i));
		}
		printf("\n");
		for (i = 0; i < size; i++) {
			printf("%d ", *(B + i));
		}
	}
	else {
		for (i = 0; i < size; i++) {
			printf("%d ", *(B + i));
		}
		printf("\n");
		for (i = 0; i < size; i++) {
			printf("%d ", *(A + i));
		}
	}
	printf("\n");
}
