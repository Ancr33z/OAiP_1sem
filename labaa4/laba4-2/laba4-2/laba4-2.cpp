#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a, b, c;
	scanf_s("%d%d%d", &a,&b,&c);
	
	if (a == b || b == c || a == c ) {
		printf("Пара равных между собой чисел есть");
	}
	else {
		printf("Пары равных между собой чисел нет");
	}

}