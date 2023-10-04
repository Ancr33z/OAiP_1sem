#include <iostream> 
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	float b = -0.05, a = 1.72, i, d, z;

	for (i = -5; i < 5; i += 2) {
		if (i > 3*b) {
			d = a+b*i;
			z = (d * a / 4) / (3 * a * b - exp(1 + d) / 100);
		}
		else
		{
			d = tan(b)-a*i;
			z = (d * a / 4) / (3 * a * b - exp(1 + d) / 100);
		}

		cout << "z = " << z << endl;
		cout << "d = " << d << endl;

	}

	return 0;
}