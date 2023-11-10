#include <iostream> 
#include <iomanip>
using namespace std;


int main()
{
	float a=4, b=7, x, x1, e = 0.0001;
	setlocale(LC_CTYPE, "Rus");

	if ((cos(a) + a - 7) * ((-sin(a) + 1))>0) {
		x1 = a;
	}
	else {
		x1 = b;
	}
	do {
		x = x1;	
		x1 = x - ((cos(x) + x - 7) / ((-sin(x) + 1)));
	} while (abs(x1 - x) > e);

	printf("%.4f", x1);

	return 0;
}