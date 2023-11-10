#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	float i, s1, s2, a = 4, s, b = 7, h, x, n = 200;
	setlocale(LC_CTYPE, "Russian");

	h = (b - a) / (2*n);
	x = a + 2*h;
	s1 = 0;
	s2 = 0;
	i = 1;
	do {
		s2 = s2 + pow(cos(x), 3);
		x = x + h;
		s1 = s1 + pow(cos(x), 3);
		x = x + h;
		i++;
	} while (i < n);

	s = h / 3 * (pow(cos(a), 3) + 4 * s1 + 2 * s2 + pow(cos(b), 3));

	printf("%f", s);

	return 0;
}