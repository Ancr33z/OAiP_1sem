﻿#include <iostream> 
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	int i,summ = 0;

	for (i = 0; i < 200; i ++) {

		if (i % 3 == 0) {
			summ += i;
		}
	}
	printf("sum = %d", summ);
	return 0;
}