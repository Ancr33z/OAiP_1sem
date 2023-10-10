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

    printf("Введите n, p: ");
    scanf_s("%d%d", &n, &p);

    char* arrA_new = new char[sizeof(arrA)];
    strcpy_s(arrA_new, sizeof(arrA), arrA);

    for (i = n; i < p && arrA_new[i]; i++)
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

    printf("Введите q, m: ");
    scanf_s("%d%d", &q, &m);

    for (i = q; i <= q  + m && arrB[i]; i++)
    {
        if (i >= 0)
        {
            arrB[i] = arrA_new[i - q];
        }
    }

    printf("Измененное B в 2-ой с/с = %s\n", arrB);

    delete[] arrA_new;

    return 0;
}