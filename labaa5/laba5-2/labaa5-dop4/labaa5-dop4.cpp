#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a[100];
	int i, n, p, j;
	float sum = 0,temp = 0;
	printf("%s", "Введите количество лет n: ");
	scanf_s("%d", &n);
	printf("%s", "Введите значение p%: ");
	scanf_s("%d", &p);
	for (i = 0; i < n; i++)
	{
		printf("%s%d%s", "Введите s", i+1, ": ");
		scanf_s("%d", &a[i]);
		for (j = n - i-1; j > 0; j--) {
			 a[i] -= a[i] * (p * 0.01);
			
		}
		sum += a[i];
	}

	printf("%s%.3f\n", "общая стоимость за n лет= ", sum);
	return 0;
}