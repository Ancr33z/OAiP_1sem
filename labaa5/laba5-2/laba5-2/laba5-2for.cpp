#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	float y, z, a = 2e-3, b = 8.5, n = 2, i, j;


	for (j = 0; j < 3; j++) {
		scanf_s("%le", &i);

		y = sqrt(i * b + pow(b, 2) * a);
		z = y * tan(n / 4) - exp(1 + b);

		printf("y = %.3f\t", y);
		printf("z = %.3f\n", z);
	}

	return 0;
}