#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int A, B, i, count= 0, c = 13;
	int maskA = 32766;
	int maskAend = ~maskA;
	cout << "Введите число=";
	cin >> A;

	_itoa_s(A, tmp, 2);
	cout << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "Маска для А: " << tmp << endl;
	_itoa_s((A >> 1 | maskA), tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;
	_itoa_s((((~(A >> 1 & maskA)) << 18) >> 16), tmp, 2);
	cout << "Перевернутые биты А: " << tmp << endl;

	
	_itoa_s(((A & maskAend) | (((~((A >> 2 & maskA))) << 18) >> 16)), tmp, 2);
	cout << " Результат A=" << tmp << endl;

	// Обнуление через 1 после чего слияние через &

	return 0;
}



//for (i = 0; i < 33; i++) {  //Если надо считать справа код считает количество символов в двоичной системе
//	if (tmp[i] == '1') {      //с помощью него можно начать отсчёт с конца
//		count++;
//	}
//	else if (tmp[i] == '0')
//	{
//		count++;
//	}
//}
//for (i =1; i <= 14; i++) {
//	if (tmp[i] == '1') {
//		tmp[i] = '0';
//	}
//	else
//	{
//		tmp[i] = '1';
//	}
//}