#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    int number=0, i, ipow, digit1, digit2, digit3;
    for (i = 2; i < 32;i++) {
        if (i * i > 100) {
            ipow = i*i; // квадрат числа
            digit1 = ipow / 100 ;
            digit2 = ipow / 10 % 10;
            digit3 = ipow % 10;
            if ((digit3 > digit2) && (digit2 > digit1)) {
                number = i;
                break; // При нахождении такого числа, что цифры идут в порядке возрастания слева направо выводим его
            }
        }
    }

    printf("%d\n", number);

    return 0;
}
