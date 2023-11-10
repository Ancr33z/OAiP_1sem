#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	float y, z, a = 2e-3, b , n = 2, i;

	
	for (i = 0; i <= 3; i++) {
		printf("Enter n:");
		scanf_s("%f", &n);

		b = 2;
		while (b <= 3) {

			y = sqrt(i * b + pow(b, 2) * a);
			z = y * tan(n / 4) - exp(1 + b);
			b += 0.5;

			printf("y = %5.3f\t", y);
			printf("z = %5.3f\n", z);
		}

	}

	return 0;
}