#include <iostream>
using namespace std;

int main()
{

	double z, u, c = 1.4,y = 0.5,x = 2e-4;

	z = exp(c * x) / y + 3;
	u = sqrt(pow(z, 3) - 0.1 * z);

	cout << "z=" << z << endl;
	cout << "u=" << u << endl;

	return 0;
}