#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a, b, c;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
		
	if (a == b || b == c || a == c ) {
		cout << "Пара равных между собой чисел есть";
	}
	else{
		cout << "Пары равных между собой чисел нет";
	}

}