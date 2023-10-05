#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "Rus");
		float m = 4, c = -0.045, b,g, i, j, sum = 1;

	for (j = 1; j <= m; j++)
	{
		sum *= j;
	}

	for (i = 0; i < m; i++) 
	{
		scanf_s("%f", &b);
		g = c * sum * pow((b + 1), 2);
		printf("%f\n",g) ;
	}	

	return 0;
}
