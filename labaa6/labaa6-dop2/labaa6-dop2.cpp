﻿#include <iostream>

void main()
{
    setlocale(LC_ALL, "Rus");
    int count = 0, a, b, c, d, R = 100;
    for (a = 0; a <= 2; a++) { // расчёт монет в номинал 50коп.
        for (b = 0; b <= 5; b++) { // расчёт монет в номинал 20коп.
            for (c = 0; c <= 20; c++) { // расчёт монет в номинал 5коп.
                for (d = 0; d <= 50; d++) { // расчёт монет в номинал 2коп.
                    if (R == (a * 50 + b * 20 + c * 5 + d * 2))
                        count++;
                }
            }
        }
    }
    printf("Количество способов набора %d\n", count);
  
}