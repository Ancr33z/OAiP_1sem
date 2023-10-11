#include <iostream>

using namespace std;

char* allocation(char*);
char* get_string(int*);
int main()
{
	setlocale(LC_ALL, "Rus");
	int len;
	char* str, *s1;
	printf("Введите строку: ");
	str = get_string(&len);
	s1 = allocation(str);
	
	printf("%s", s1);
	free(s1);
	free(str);
	return 0;
}

char* get_string(int* len) {
	*len = 0;
	int capacity = 1;
	char* str = (char*)malloc(sizeof(char));
	char c = getchar();

	while (c != '\n') {
		str[(*len)++] = c;

		if (*len >= capacity) {
			capacity *= 2;
			str = (char*)realloc(str, capacity * sizeof(char));
		}

		c = getchar();
	}

	str[*len] = '\0';

	return str;
}

char* allocation(char* str) {
	int len = strlen(str);
	int pos1 = -1;
	int pos2 = -1;


	for (int i = 0; i < len; i++) {
		if (str[i] == '*') {
			if (pos1 == -1) {
				pos1 = i;
			}
			else {
				pos2 = i;
				break;
			}
		}
	}

	if (pos1 != -1 && pos2 != -1) {
		int resultLen = pos2 - pos1 - 1;
		char* result = (char*)malloc((resultLen + 1) * sizeof(char));

		if (result != NULL) {
			if (strncpy_s(result, resultLen + 1, str + pos1 + 1, resultLen) == 0) {
				return result;
			}
			else {
				free(result);
			}
		}
	}
	return NULL;
}