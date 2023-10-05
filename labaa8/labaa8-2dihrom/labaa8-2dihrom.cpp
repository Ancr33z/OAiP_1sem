#include <iostream> 
#include <iomanip>
using namespace std;



int main()
{
	float a, b, x, e = 0.0001;
	setlocale(LC_CTYPE, "Rus");

	scanf_s("%f%f", &a, &b);

	do {
		x = (a + b) / 2;
		if ((cos(x) + x - 7) * (cos(a) + a - 7) > 0) {
			b = x;
		}
		else {
			a = x;
		}
	} while (abs(a - b) > 2 * e);

	printf("%.4f", x);

	return 0;
}