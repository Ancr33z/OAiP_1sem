#include <iostream> 
#include <iomanip>
using namespace std;


double f(int x) {
	return pow(cos(x), 3);
}

int main()
{
	double i, s1, s2, a = 4, z, b = 7, h, x, n = 200;
	setlocale(LC_CTYPE, "Russian");

	h = (b - a) / n;
	x = a + 2*h;
	s1 = 0;
	s2 = 0;
	i = 1;
	do {
		s2 = s2 + f(x);
		x = x + h;
		s1 = s1 + f(x);
		x = x + h;
		i = i + 1;
	} while (x > (b - h));

	z = h / 3 * (f(a) + 4 * f(a + h) + 4 * s1 + 2 * s2 + f(b));

	printf("%le", z);

	return 0;
}