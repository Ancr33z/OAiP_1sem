#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a, b;
	printf("Введите значение a и b:\n");
	scanf_s("%d %d", &a, &b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("Значения именены : a = %d %s %d", a, "b = ", b);
}