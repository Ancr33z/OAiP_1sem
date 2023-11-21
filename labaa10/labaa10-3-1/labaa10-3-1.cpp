#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");


	int A;
	char tmp[33];
	int mask = ~0;

	cout << "Введите число: ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "В двочиной системе:\n" << tmp << endl;
	
	mask &= ~(~0 << 13);
	mask <<= 2;
	A ^= mask;
	_itoa_s(A, tmp, 2);

	cout << "инвертируемое число: \n" << tmp << endl;



}