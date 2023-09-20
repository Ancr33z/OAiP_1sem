#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a, b, c;
	printf("Введите значение a и b:\n" );
	scanf_s("%d %d", &a,&b);

	c = a;
	a = b;
	b = c;

	printf("Значения именены :a = %d %s %d",a,"b =", b);
}