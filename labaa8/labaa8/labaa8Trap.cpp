#include <iostream> 
#include <iomanip>
using namespace std;


double f(int x) {
	return pow(cos(x), 3);
}

int main()
{
	double a = 4, b = 7, h, x, s, z, n = 200;
	setlocale(LC_CTYPE, "Russian");

	h = (b - a) / n;
	x = a;
	s = 0;
	do {
		s = s + h * (f(x) + f(x + h)) / 2;
		x = x + h;
	} while (x > (b - h));

	z = (f(a) + f(b)) / 2 * (b - a) + (f(x)/12*pow((b-a),3));

	printf("%le", z);

	return 0;
}