#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	float n, m, summ;
	printf("Введите значение n и m:\n");
	scanf_s("%f %f", &n, &m) ;
	summ = m;
	for (int i = 0; i < n; i++) {
		summ += m + 0.166666667 * i;
	}
	printf("Количество часов работы всей бригады: %f", summ);
}