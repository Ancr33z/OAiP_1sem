#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(45) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;
	cout << setw(43) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(42) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(41) << setfill(probel) << probel;
	cout << setw(14) << setfill(c) << c << endl;
	cout << setw(42) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(43) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(45) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;

}