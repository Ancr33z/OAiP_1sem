#include <iostream>

int Sum(const int args[], int count);

int main() {
    setlocale(LC_ALL, "Rus");
    int count = 0, n, result;
    printf("Введите количество аргументов: ");
    scanf_s("%d", &n);
    int* values = (int*)malloc(0);
    printf("Введите аргументы: ");
    do
    {
        values = (int*)realloc(values, sizeof(int) * ++count);
        scanf_s("%d", &values[count - 1]);
    } while (count < n);
    count = 0;
    result = Sum(values, n - 1);
    printf("Сумма: %d\n", result);
    printf("Введите количество аргументов: ");
    scanf_s("%d", &n);
    printf("Введите аргументы: ");
    do
    {
        values = (int*)realloc(values, sizeof(int) * ++count);
        scanf_s("%d", &values[count - 1]);
    } while (count < n);
    count = 0;

    result = Sum(values, n - 1);
    printf("Сумма: %d\n", result);

    printf("Введите количество аргументов: ");
    scanf_s("%d", &n);
    printf("Введите аргументы: ");
    do
    {
        values = (int*)realloc(values, sizeof(int) * ++count);
        scanf_s("%d", &values[count - 1]);
    } while (count < n);

    result = Sum(values, n - 1);

    printf("Сумма: %d\n", result);
    return 0;
}

int Sum(const int args[], int count) {
    int sum = 0,i;
    for (i = 0; i < count; i++) {
        sum += args[i] * args[i + 1];
    }
    return sum;
}