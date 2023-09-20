#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	
	float a, b, c, d, x1, x2;

	cin >> a >> b >> c;
	
	d = pow(b, 2) - 4 * a * c;
	if (d < 0) {
		cout << "Корней нет";
	}
	else
	{
		x1 = (- b + sqrt(d)) / 2 * a;
		x2 = (- b - sqrt(d)) / 2 * a;
		cout << "x1=" << x1 << ", x2=" << x2;
	}
	
	return 0;
}