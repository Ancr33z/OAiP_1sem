#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	char c;
	cout << "Введите символ: ";
	cin >> c;
	cout << setw(16) << setfill(c) << c << endl;
	cout << setw(16) << setfill(c) << c << endl;
	cout << setw(16) << setfill(c) << c << endl;
	cout << setw(16) << setfill(c) << c << endl;
	cout << setw(16) << setfill(c) << c << endl;
	cout << setw(16) << setfill(c) << c << endl;
	cout << setw(16) << setfill(c) << c << endl;
	return 0;
}