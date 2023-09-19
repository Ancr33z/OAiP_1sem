#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b || b == c || a == c ) {
		cout << "Пара равных между собой чисел есть";
	}
	else{
		cout << "Пары равных между собой чисел нет";
	}

}