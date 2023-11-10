#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "Rus");
	float n = 6, x, y, q, i, sum = 0;


	for (i = 1; i <= n; i++)
	{
		printf("Введите x,y: ");
		scanf_s("%f%f", &x,&y);
		sum += x * y;

	}
	q = sum;
	printf("%f\n", q);

	return 0;
}