#include <iostream>


int main()
{
	using namespace std;
	setlocale(LC_ALL, "Rus");
	float m = 4, c = -0.045, b, g, j, sum = 1;

	for (j = 1; j <= m; j++)
	{
		printf("Введите b: ");
		scanf_s("%f", &b);
		sum *= pow((b + 1), 2);
	}

	g = c * sum;
	printf("%f\n", g);

	return 0;
}
