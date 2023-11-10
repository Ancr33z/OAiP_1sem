#include <iostream>
#include <cmath>
#include <cstdio>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "Rus");
	float a = 5.45, n = 5, y, q, i, sum = 1,s;

	for (i = 1; i <= n; i++)
	{
		printf("Введите y: ");
		scanf_s("%f", &y);
		sum *= y/(pow(i,2)+1);

	}
	q = 4 * sum;
	s = 2 * a + q * sin(a);
	printf("%f\n", s);

	return 0;
}