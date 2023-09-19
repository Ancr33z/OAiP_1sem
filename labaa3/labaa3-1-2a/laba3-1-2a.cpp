#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a, b, c;
	cout << "Введите значение a и b:" << endl;
	cin >> a >> b;

	c = a;
	a = b;
	b = c;

	cout << "Значения именены : " << "a = " << a << ' ' << "b = " << b;
}