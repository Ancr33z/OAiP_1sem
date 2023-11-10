#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int A, i, count = 0, c = 13;
	printf("Введите число ");
	scanf_s("%d", &A);

	_itoa_s(A, tmp, 2);
	printf("%s\n", tmp);

	for (i = 1; i < 15; i++) {
		if (tmp[i] == '1') {
			tmp[i] = tmp[i] & '0';
		}
		else
		{
			tmp[i] = tmp[i] | '1';
		}
	}

	printf("%s", tmp);
	return 0;
}