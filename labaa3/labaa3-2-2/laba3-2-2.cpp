#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int m;
	float a, b;

	scanf_s("%d", &m);
	
	if (m % 2 > 0) {
		a = (m + 1) / 2 + 2;
		b = m / 2 - 2;
	}
	else {
		a = m / 2 + 2.5;
		b = m / 2 - 2.5;
	};

	printf("%f\t",a);
	printf("%f\t", b, "\n");
	printf("Разница 5");
}