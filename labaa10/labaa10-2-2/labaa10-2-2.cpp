﻿#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int i, n, p;
	int A;
	char result[30];

	cout << "Введите число: A";
	cin >> A;
	cout << "Введите количество битов: n ";
	cin >> n;
	cout << "Введите позицию: p ";
	cin >> p;

	p -= 1;
	_itoa_s(A, result, 2);
	cout << result << endl;

	for (i = 0; i < n; i++)
	{
		A = A | (1 << --p);
	}

	_itoa_s(A, result, 2);
	cout << result << endl;
}