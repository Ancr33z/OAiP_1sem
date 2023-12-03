#include <cstring>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	char str[250], s1[250];
	int k, n;

	printf("¬ведите строку: ");
	gets_s(str);
	printf("¬ведите n,k: ");
	scanf_s("%d%d", &n, &k);

	for (int i = n; i < n + k; i++) {
		*(s1+i - n) = *(str+i);
	}
	*(s1+k) = '\0';
	printf("%s", s1);
	return 0;
}
