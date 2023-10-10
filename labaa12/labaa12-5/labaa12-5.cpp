# include <cstring>
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
	char str[250], s1[250];

	int i, pos1, pos2;
	printf("Введите строку: ");
	scanf_s("%s", str, 249);
	pos1 = -1;
	pos2 = -1;
	for (i = 0; i < sizeof(str); i++) {
		if (str[i] == '(') {
			pos1 = i;
		}
		if (str[i] == ')') {
			pos2 = i;
			break;
		}
	}

	strncpy_s(s1, &str[0], pos1);
	strncat_s(s1, &str[pos2 + 1], strlen(str) - pos2);
	printf("%s", s1);
}
