﻿#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	float y, z, a = 2e-3, b = 8.5, n = 2, i,j;

	
	for (j = 0; j < 4; j++) {
		printf("Enter n:");
		scanf_s("%f", &n);

		i = 2;
		while (i <= 3) {

			y = sqrt(i * b - pow(b, 2) * a);
			z = y * tan(n / 4) - exp(1 + b);
			i += 0.5;

			printf("y = %5.3f\t", y);
			printf("z = %5.3f\n", z);
		}

	}

	return 0;
}