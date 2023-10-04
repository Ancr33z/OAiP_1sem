#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "Rus");
	float m = 4, c = -0.045, b,g, i, j, sum = 1;

	for (i = 1; i <= m; i++)
	{
		sum = sum * i;
	}

	for (j = 0; j < m; j++) 
	{
		cin >> b;

		g = c * sum * pow((b + 1), 2);
		cout << "g=" << g << endl;
	}	

	return 0;
}
