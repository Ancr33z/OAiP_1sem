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
	for (i = 0; i < 33; i++) {  
		if (tmp[i] == '1') {      
			count++;
		}
		else if (tmp[i] == '0')
		{
			count++;
		}
	}
	for (i = count-2; i > count-16; i--) {
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