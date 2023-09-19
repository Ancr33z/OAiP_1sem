#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	long int m;
	double a, b;

	cin >> m;
	
	if (m % 2 > 0) {
		a = (m + 1) / 2 + 2;
		b = m / 2 - 2;
	}
	else {
		a = m / 2 + 2.5;
		b = m / 2 - 2.5;
	};

	cout << a << ' ' << b << endl;
	cout << "Разница 5";
}