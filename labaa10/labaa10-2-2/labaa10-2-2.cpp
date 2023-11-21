#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int i, n, p, count = 0;
	int A;
	char result[33];

	printf("Введите число A: ");
	scanf_s("%d", &A);
	printf("Введите количество битов n: ");
	scanf_s("%d", &n);
	printf("Введите позицию p: ");
	scanf_s("%d", &p);

	_itoa_s(A, result, 2);
	printf("Число А в 2-ой с/с:\n%s\n", result);

	for (i = 0; i < 33; i++) {       
		if (result[i] == '1') {        
			count++;
		}
		else if (result[i] == '0') {
			count++;                             
		}
		else break;
	}

	for (i =count - p; i < count - p+n; i++)
	{
		result[i] = result[i] | 1;
	}
	printf("Изменённое число А в 2-ой с/с:\n%s\n", result);
	return 0;
}