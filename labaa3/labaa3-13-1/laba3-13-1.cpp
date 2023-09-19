#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c; //сердечко ♥
	cout << setw(47) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c;
	cout << setw(8) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;
	cout << setw(45) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;
	cout << setw(44) << setfill(probel) << probel;
	cout << setw(13) << setfill(c) << c;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(13) << setfill(c) << c << endl;
	cout << setw(44) << setfill(probel) << probel;
	cout << setw(27) << setfill(c) << c << endl;
	cout << setw(45) << setfill(probel) << probel;
	cout << setw(25) << setfill(c) << c << endl;
	cout << setw(46) << setfill(probel) << probel;
	cout << setw(23) << setfill(c) << c << endl;
	cout << setw(47) << setfill(probel) << probel;
	cout << setw(21) << setfill(c) << c << endl;
	cout << setw(48) << setfill(probel) << probel;
	cout << setw(19) << setfill(c) << c << endl;
	cout << setw(49) << setfill(probel) << probel;
	cout << setw(17) << setfill(c) << c << endl;
	cout << setw(50) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c << endl;
	cout << setw(51) << setfill(probel) << probel;
	cout << setw(13) << setfill(c) << c << endl;
	cout << setw(52) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;
	cout << setw(53) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;
	cout << setw(54) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;
	cout << setw(55) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(56) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(57) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;

}