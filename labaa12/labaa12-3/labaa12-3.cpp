#include <cstring>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	char str[250], s1[250];
	int i, pos1, pos2;
	printf("Введите строку: ");
	scanf_s("%s", str, 249);
	pos1 = -1;
	pos2 = -1;
	for (i = 0; i < sizeof(str); i++) {
		if (str[i] == '*')  {
			if (pos1 == -1) {
				pos1 = i;
					
			}
			else {
				pos2 = i;
				break;
			}
		}
		
	}

	strncpy_s(s1, &str[pos1+1], pos2-pos1-1);
	printf("%s", s1);
	return 0;
}
