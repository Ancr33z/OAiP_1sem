#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a, b;
	cout << "Введите значение a и b:" << endl;
	cin >> a >> b;

	a = a + b;
	b = a - b;
	a = a - b;

	cout << "Значения именены : " <<"a = " << a << ' ' << "b = " << b;
}