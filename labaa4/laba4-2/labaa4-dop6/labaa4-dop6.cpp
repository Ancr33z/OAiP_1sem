#include <iostream>

int main() {
    float a, b, c, r, s, t;

    setlocale(LC_ALL, "rus");
    printf("Введите размеры коробки (a b c): ");
    scanf_s("%f %f %f", &a, &b, &c);

    // Введите размеры посылки r, s и t
    printf("Введите размеры посылки (r s t): ");
    scanf_s("%f %f %f", &r, &s, &t);

    // Проверяем, можно ли упаковать коробку в посылку без углового укладывания
    if ((a <= r && b <= s && c <= t)||
        (a <= r && b <= t && c <= s)||
        (a <= s && b <= r && c <= t)||
        (a <= s && b <= t && c <= r)||
        (a <= t && b <= r && c <= s)||
        (a <= t && b <= s && c <= r)) {
        printf("Коробка влезет.\n");
    }
    else {
        printf("Коробка не влезет\n");
    }

    return 0;
}