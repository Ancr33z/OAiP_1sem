#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int maxSize = 99;
	int K[maxSize];
	int i, placeMin, placeMax, max, min, size, n;

	printf("Введите размер массива \n");
	scanf_s("%d", &size);
	n = size;


	for (i = 0; i < n; i++) {
		K[i] = rand() % 100;
		printf("%d%c", K[i], ' ');
	}
	min = K[1];
	max = K[1];

	for (i = 0; i < n; i++) {
		if (min > K[i]) {
			min = K[i];
			placeMin = i;
		}
		if (max < K[i]) {
			max = K[i];
			placeMax = i;
		}
	}

	K[placeMin] = K[placeMax];
	K[placeMax] = min;
	printf("\n");
	for (i = 0; i < n; i++) {
		printf("%d%c", K[i], ' ');
	}
	return 0;
}