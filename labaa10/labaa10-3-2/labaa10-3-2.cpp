#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int A, B;
	char arrA[16], arrB[16], arrA_new[16], arrB_new[16];

	printf("Введите число А,B = ");
	scanf_s("%d%d", &A, &B);

	_itoa_s(A, arrA, 2);
	cout << "A в 2-ой с/с= " << arrA << endl;

	_itoa_s(B, arrB, 2);
	cout << "B в 2-ой с/с= " << arrB << endl;

	int n, p;
	cout << "Введите n,p: ";
	scanf_s("%d%d", &n, &p);


	int num = p - n;
	for (num; num < p; num++)
	{
		int j = 0;
		if (arrA[num] == '0')
		{

			arrA_new[j] = '1';
			j++;
		}

		else
		{
			arrA_new[j] = '0';
			j++;
		}

	}

	int q,m;
	printf("Введите q,m: ");
	scanf_s("%d%d", &q, &m);

	for (int i = 0; i < strlen(arrB); i++)
	{
		if (i >= q && i <= q + m)
		{
			int j = 0;
			arrB[i] = arrA_new[j];
			j++;

			cout << arrB[i];
		}

		else
		{
			cout << arrB[i];
		}
	}



	cout << endl;
}