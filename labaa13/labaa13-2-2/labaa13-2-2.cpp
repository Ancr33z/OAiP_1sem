#include <iostream>

int main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 100, m = 100;
	int arrA[n][m];
	float arrB[n][3];
	int i, j, sizeR, sizeC;
	printf("Введите размеры массива ");
	scanf_s("%d%d", &sizeR, &sizeC);

	for (i = 0; i < sizeR; i++) {
		for (j = 0; j < sizeC; j++) {
			scanf_s("%f", &arrA[i][j]);
		}
	}
	for (i = 0; i < sizeR; i++) {
		for (j = 0; j < 3; j++) {
			*(*(arrB + i) + j) = 0;
		}
	}
	for (i = 0; i < sizeR; i++) {
		for (j = 0; j < sizeC; j++) {
			if (*(*(arrA + i) + j) > 0) {
				*(*(arrB + i) + 0) += *(*(arrA + i) + j);
				*(*(arrB + i) + 1) +=1;
			}
		}
	}
	for (i = 0; i < sizeR; i++) {
		*(*(arrB + i) + 2) = *(*(arrB + i) + 0) / *(*(arrB + i) + 1);
	}
	for (i = 0; i < sizeR; i++) {
		printf("Сумма положительных элементов в строке %d = %f\n", i + 1, *(*(arrB + i) + 0));
		printf("Количество элементов в строке %d = %f\n", i + 1, *(*(arrB + i) + 1));
		printf("Среднее арифметическое элементов в строке %d = %f\n", i + 1, *(*(arrB + i) + 2));
	}
	return 0;
}
