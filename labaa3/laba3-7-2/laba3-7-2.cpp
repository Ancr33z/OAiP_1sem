#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	long int L;
	double s;

	cin >> L;
	
	s = pow(L, 2) / (4 * 3.14159265);

	cout << "Площадь равна:" << s << endl;
}