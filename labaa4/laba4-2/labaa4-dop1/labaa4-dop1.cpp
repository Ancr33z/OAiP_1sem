#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int a, b, operation;
    float result;
    printf("Введите числа: ");
    scanf_s("%d%d", &a, &b);

    printf("%s", "Выберете операцию(1.%, 2./, 3.+, 4.-, 5.*): ");
    scanf_s("%d", &operation);
    switch (operation) {
    case 1:
        result = a % b;
        printf("%.3f", result);
        break;
    case 2:
        result = a / b;
        printf("%.3f", result);
        break;
    case 3:
        result = a + b;
        printf("%.3f", result);
        break;
    case 4:
        result = a - b;
        printf("%.3f", result);
        break;
    case 5:
        result = a * b;
        printf("%.3f", result);
        break;
    default:
        printf("%s", "Такой операции нет");
    }
    return 0;
}