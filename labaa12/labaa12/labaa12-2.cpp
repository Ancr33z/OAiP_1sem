#include <cstring>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	char str[250],s1[250];
	int k, n;
	printf("Введите строку: ");
	scanf_s("%s",str,sizeof(str));
	printf("Введите k,n: ");
	scanf_s("%d%d", &k,&n);


	strncpy_s(s1, &str[n-1], k);

	printf("%s", s1);
	return 0;
}
