#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int findzero(const int*, int, int);
void printmass(const int*, int, int);

int main(void)
{
	setlocale(LC_ALL, "Rus");
	int* N;
	int count = 0, i, j, n, m, result;
	printf("Введите размер массива(n,m)");
	scanf_s("%d%d", &n, &m);
	N = new int[n * m];
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
		{
			printf("Введите элемант %d -й строки %d -го столбца ", i + 1, j + 1);
			scanf_s("%d", &N[i * m + j]);
		}
	}
	result = findzero(N, n, m);
	printmass(N, n, m);

	printf("Количество строк с нулем: %d \n", result);
	delete(N);
}

int  findzero(const int* N, int n, int m) {
	int count = 0, i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (N[i * m + j] == 0) {
				count++;
				break;
			}
		}
	}

	return count;
}
void printmass(const int* N, int n, int m) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("%d ", N[i * m + j]);
		}
		printf("\n");
	}
}