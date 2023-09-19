#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	double y, z, a = 2e-3, b = 8.5, n = 2, i;
	i = 1;

	while (i <= 3) {

		y = sqrt(i * b - pow(b, 2) * a);
		z = y * tan(n / 4) - exp(1 + b);

		printf("y = %5.3f\t", y);
		printf("z = %5.3f\n", z);
		i += 0.5;
	}

	return 0;
}