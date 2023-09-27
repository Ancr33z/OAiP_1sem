#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int i, n, p;
	int A;
	char rezult[30];

	cout << "Введите число: A ";
	cin >> A;
	cout << "Введите количество битов: n ";
	cin >> n;
	cout << "Введите позицию: p ";
	cin >> p;

	p -= 1;
	_itoa_s(A, rezult, 2);
	cout << rezult << endl;

	for (i = n; i > 0; i--)
	{
		A = A | (1 << --p);
	}

	_itoa_s(A, rezult, 2);
	cout << rezult << endl;
}