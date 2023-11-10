#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int A, B, i, n, p, q, m;
    char arrA[33], arrB[33];

    printf("Введите число А, B ");
    scanf_s("%d%d", &A, &B);


    _itoa_s(A, arrA, sizeof(arrA), 2);
    printf("A в 2-ой с/с = \n%s\n", arrA);

    _itoa_s(B, arrB, sizeof(arrB), 2);
    printf("B в 2-ой с/с = \n%s\n", arrB);

    printf("Введите количество битов (n), позицию (p): ");
    scanf_s("%d%d", &n, &p);

    char* arrA_new = new char [33];
    strncpy_s(arrA_new, n+2, &arrA[p - n], n+1);

    for (i = 0; i <= n; i++)
    {
        if (arrA_new[i] == '0')
        {
            arrA_new[i] = arrA_new[i] | '1';
        }
        else
        {
            arrA_new[i] = arrA_new[i] & '0';
        }
    }

    printf("Введите количество битов (m), позицию (q): ");
    scanf_s("%d%d", &m, &q);

    for (i = q-m-1; i < q-1; i++)
    {
        if (i >= 0)
        {
            arrB[i] = arrA_new[i - q+m+1];
        }
    }

    printf("Измененное B в 2-ой с/с = %s\n", arrB);

    delete[] arrA_new;

    return 0;
}