#include <iostream>

int main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 100, m = 100;
	float arrA[n][m];
	float arefAverage, sum = 0, count = 0;
	int i, j, sizeR, sizeC, quantity = 0;
	printf("Введите размеры массива ");
	scanf_s("%d%d", &sizeR, &sizeC);

	for (i = 0; i < sizeR; i++) {
		for (j = 0; j < sizeC; j++) {
			scanf_s("%f", &arrA[i][j]);
		}
	}

	for (i = 0; i < sizeR; i++) {
		for (j = 0; j < sizeC; j++) {
			sum += *(*(arrA +i)+j);
			count++;
		}
	}
	arefAverage = sum / count;

	for (i = 0; i < sizeR; i++) { 
		for (j = 0; j < sizeC; j++) {
			if (*(*(arrA + i) + j) > arefAverage) {
				quantity++;
			}
		}
	}
	printf("Среднее арифметическое: %f\n", arefAverage);
	printf("Количество элементов больших среднего арифметического: %d\n", quantity);

	return 0;
}
