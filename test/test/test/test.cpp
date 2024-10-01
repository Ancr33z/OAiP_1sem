#include "stdio.h"
#define func(a, b) a ## b
int main()
{
	int x = 5;
	int y = 1;
	int xy = 10;
	printf("%d", func(x, y));
	return 0;
}