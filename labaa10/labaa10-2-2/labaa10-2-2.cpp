#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int i, n, p;
	int A;
	char result[33];

	printf("Введите число A: ");
	scanf_s("%d", &A);
	printf("Введите количество битов n: ");
	scanf_s("%d", &n);
	printf("Введите позицию p: ");
	scanf_s("%d", &p);

	_itoa_s(A, result, 2);
	printf("Число А в 2-ой с/с:\n%s\n", result);

	for (i = p; i < n+p; i++)
	{
		result[i] = result[i] | 1;
	}
	printf("Изменённое число А в 2-ой с/с:\n%s\n", result);
	return 0;
}