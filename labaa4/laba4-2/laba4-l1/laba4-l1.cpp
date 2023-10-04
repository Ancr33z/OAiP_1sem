#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	
	int x1,y1,x2,max;

	cin >> x1 >> y1 >> x2;
	max = x1;

	if (max < y1) {
		max = y1;
	}
	if(max <x2){
		max = x2;
	}
	
	printf("%d", max);

	return 0;
}