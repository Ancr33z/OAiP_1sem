#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	const int maxSize = 99;
	int K[maxSize], L[(maxSize + 1) / 2], M[(maxSize + 1) / 2];
	int i, f, j, n, size;
	printf("Введите размер массива, не больше 100 \n");
	scanf_s("%d", &size);
	n = size;
	j = 0;
	f = 0;
   for (i = 0; i < n; i++)
   {
	   K[i] = rand() % 99;
	   printf("%d%c", K[i], ' ');
   }
   for (i = 0; i < n; i++) {
	   if (i % 2 != 0) {
		   L[j] = K[i];
		   j++;
	   }
	   else {
		   M[f] = K[i];
		   f++;
	   }
   }
   printf("\n");
   for (i = 0; i < f; i++) {
	   printf("%d ", M[i]);
   }
   printf("\n");
   for (i = 0; i < j; i++) {
	   printf("%d ", L[i]);
   }

   printf("\n%d %d",j,f);
   
   return 0;
}

