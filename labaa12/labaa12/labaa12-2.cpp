#include <cstring>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	char str[250], s1[250];
	int k, n;

	printf("Введите строку: ");
	scanf_s("%s",str,sizeof(str));
	printf("Введите k,n: ");
	scanf_s("%d%d", &k,&n);

	for (int i = n; i < n + k; i++) {
		s1[i - n] = str[i];
	}
	s1[k	] = '\0';
	printf("%s", s1);
	return 0;
}	