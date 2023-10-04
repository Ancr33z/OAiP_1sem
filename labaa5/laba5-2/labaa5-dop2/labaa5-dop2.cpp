#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	int p, days = 0, q;
	float profit = 0;
	printf("%s", "Введите значение P: ");
	scanf_s("%d", &p);
	printf("%s", "Введите значение Q: ");
	scanf_s("%d", &q);
	do
	{
		profit += (profit + p) * 0.03;
		days++;
	} while (profit < q);
	printf("%s%.3f%s\n", "Выручка в тот день когда она превысит значение Q: ", profit, "руб.");
	printf("%s%d", "Дней до того как выручка превысила значение Q: ", days);
	return 0;
}