#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int maxSize = 99;
	int K[maxSize];
	int i, placeMin, placeMax, maxE, minE, size, n;

	printf("Введите размер массива \n");
	scanf_s("%d", &size);
	n = size;
	int min = -99;
	int max = 99;
	int range = max - min + 1;
	srand(time(NULL));

	for (i = 0; i < n; i++) {
		K[i] = (rand() % range) + min;
		printf("%d%c", K[i], ' ');
	}
	minE = K[0];
	maxE = K[0];

	for (i = 0; i < n; i++) {
		if (minE > K[i]) {
			minE = K[i];
			placeMin = i;
		}
		if (maxE < K[i]) {
			maxE = K[i];
			placeMax = i;
		}
	}

	K[placeMin] = maxE;
	K[placeMax] = minE;
	printf("\n");
	for (i = 0; i < n; i++) {
		printf("%d%c", K[i], ' ');
	}
	return 0;
}