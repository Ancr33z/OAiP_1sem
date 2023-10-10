#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	int i, size, n;
	int A[999], B[999],S[999];

	printf("Введите количество элементов(n)");
	scanf_s("%d", &n);
	size = n;
	for (i = 0; i < size; i++) {
		*(A + i) = rand() % 99;
		printf("%d ", *(A + i));
	}

	printf("\n");
	for (i = 0; i < size; i++) {
		*(B + i) = rand() % 99;
		printf("%d ", *(B + i));
	}

	for (i = 0; i < size; i++) {
		*(S + i) = *(A + i) + *(B + i);
	}
	printf("\n");
	for (i = 0; i < size; i++) {
		printf("%d ", *(S + i));
	}
}
