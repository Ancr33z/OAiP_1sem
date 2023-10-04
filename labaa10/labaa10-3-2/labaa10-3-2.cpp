#include <iostream>
#include <bitset>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int A, n, i;
	int maskA = 32766;
	char tmp[33];

	cout << "Введите число  A ";
	cin >> A;                         
	//cout << "Введите n ";
	//cin >> n;
	_itoa_s(A, tmp, 2);
	cout << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "Маска для А: " << tmp << endl;
	_itoa_s((A & maskA), tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;

	_itoa_s(~((A & maskA)), tmp, 2);
	cout << "Перевернутые биты А: " << tmp << endl;

	_itoa_s((A ^ ~(A & maskA)),tmp,2);
	cout << tmp;

	return 0;
}
