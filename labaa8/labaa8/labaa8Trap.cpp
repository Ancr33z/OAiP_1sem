#include <iostream> 
#include <iomanip>
using namespace std;



int main()
{
	float a = 4, b = 7, h, x, s, n = 200;
	setlocale(LC_CTYPE, "Rus");

	h = (b - a) / n;
	x = a;
	s = 0;
	do {
		s += h * ((pow(cos(x), 3) - 4) + (pow(cos(x+h), 3) - 4)) / 2;
		x += h;
	} while (x < (b - h));

	printf("%f", s);

	return 0;
}