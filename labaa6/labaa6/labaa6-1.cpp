#include <iostream> 
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	float a = 1.774, m = 5, x,y,z;

	for (x = 3; x < 5; x += 0.2) {

		y = sqrt(a + pow(m, 2) * pow(x, 2))/(a+x)*m;

		if (abs(y) < 1) {
			z = y + 1;
		}
		else
		{
			z = pow(sin(y), 2);
		}
		cout << "z = " << z << endl;
		cout << "y = " << y << endl;

	}

	return 0;
}