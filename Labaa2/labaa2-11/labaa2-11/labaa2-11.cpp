#include <iostream>
using namespace std;

int main()
{
	double t, u, k = 6, r = 5e-7, x = 0.095;
	t = tan(x) + r * (1 - log(x));
	u = t / (pow(x, 3) + 1) / (1 - exp(k - 4));
	cout << "t=" << t << endl;
	cout << "u=" << u << endl;

	return 0;
}