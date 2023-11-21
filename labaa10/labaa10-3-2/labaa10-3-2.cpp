#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int A, B, i, n, p, q, m,count=0;
    char arrA[33], arrB[33];

    printf("Введите число А, B ");
    scanf_s("%d%d", &A, &B);


    _itoa_s(A, arrA, sizeof(arrA), 2);
    printf("A в 2-ой с/с = \n%s\n", arrA);

    _itoa_s(B, arrB, sizeof(arrB), 2);
    printf("B в 2-ой с/с = \n%s\n", arrB);

    printf("Введите количество битов (n), позицию (p): ");
    scanf_s("%d%d", &n, &p);

    //Начнём тут
    char* arrA_new = new char [33];    // тут создаём динамический массив

    strncpy_s(arrA_new, n+2, &arrA[p - n], n+1); // тут мы копируем биты которые выбрали позицием (p), и кол-вом (n) в массив

    for (i = 0; i < 33; i++) {       // тут мы считаем длинну второго числа 
        if (arrB[i] == '1') {        // впоследствии начинать отсчёт с конца строки
            count++;
        }
        else if (arrB[i] == '0') {
            count++;                            // 2145 5435 
        }
        else break;
    }


    for (i = 0; i <= n; i++) // тут мы инвертируем биты в полученом ранее массиве
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

    for (i = count-q; i < count-q+m+1; i++) // тут мы вставляем измененные биты в число Б
    {
            arrB[i-1] = arrA_new[i -count+q];
    }

    printf("Измененное B в 2-ой с/с = %s\n", arrB);

    delete[] arrA_new;

    return 0;
}