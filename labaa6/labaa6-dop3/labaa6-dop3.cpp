#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    int i, n = 12;
    float tmp, c1, c2, maxc1, maxc2;
    scanf_s("%f %f", &maxc1, &maxc2);
    c1 = maxc1;
    c2 = maxc2;

    for (i = 0; i < n - 1; i++) {
        if (i % 2>0) {
            tmp = c2 / 2;
            if (tmp + c1 >= maxc1) {
                c1 = maxc1;
                c2 /= 2;
            }
            else {
                c1 += tmp;
                c2 / 2;
            }
        }
        else {
            tmp = c1 / 2;
            if (tmp + c2 >= maxc2) {
                c2 = maxc2;
                c1 /= 2;
            }
            else {
                c2 += tmp;
                c1 /= 2;
            }
        }
    }
    printf("В каждом сосуде осталось: c1=%f, c2=%f\n", c1, c2);
    printf("В сосудах осталось : %f литров\n", c1 + c2);

}
