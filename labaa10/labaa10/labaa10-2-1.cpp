﻿#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int A, B, maskA = 126;
	int maskB = ~maskA +2;
	cout << "Первое число="; cin >> A;
	cout << "Второе число="; cin >> B;

	_itoa_s(A, tmp, 2); cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2); cout << "B=" << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "Маска для А: " << tmp << endl;
	_itoa_s((A & maskA)<<1, tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;
	_itoa_s(maskB, tmp, 2);
	cout << "Маска для В: " << tmp << endl;
	_itoa_s((B & maskB), tmp, 2);
	cout << " Очищены биты в B: " << tmp << endl;
	_itoa_s(((B & maskB) | (A & maskA)<<1), tmp, 2);
	cout << " Результат B=" << tmp << endl;

	return 0;
}
