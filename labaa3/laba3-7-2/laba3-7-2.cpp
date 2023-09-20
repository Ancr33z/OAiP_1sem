#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int L;
	float s;

	scanf_s("%d", &L);
	
	s = pow(L, 2) / (4 * 3.14159265);

	printf("Площадь равна: %f",s);
}