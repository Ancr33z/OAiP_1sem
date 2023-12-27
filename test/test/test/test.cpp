#include <iostream>
using namespace std;

// функция для вычисления суммы элементов массива с нечетными номерами
float sumOddElements(float* arr, int size) {
    setlocale(LC_CTYPE, "Russian");

    float sum = 0;
    for (int i = 0; i < size; i += 2) {
        sum += arr[i];
    }
    return sum;
}

// функция для вычисления суммы элементов массива, расположенных между первым и последним отрицательными элементами
float sumBetweenNegatives(float* arr, int size) {
    int firstNegativeIndex = -1; // индекс первого отрицательного элемента
    int lastNegativeIndex = -1; // индекс последнего отрицательного элемента

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            if (firstNegativeIndex == -1) {
                firstNegativeIndex = i;
            }
            lastNegativeIndex = i;
        }
    }
    float sum = 0;
    // вычисляем сумму элементов между первым и последним отрицательными
    for (int i = firstNegativeIndex + 1; i < lastNegativeIndex; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size, column;
    float sum1, sum2;
    bool found;
    cout << "Введите размер массива: ";
    cin >> size;

    float* arr = new float[size];

    cout << "Введите элементы массива: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i]; // ввод элементов массива с клавиатуры
    }

    int choice;
    cout << "Выберите задачу (1 - вычислить суммы, 2 - изменить элементы столбца): ";
    cin >> choice;

    switch (choice) {
    case 1:
        sum1 = sumOddElements(arr, size);
        sum2 = sumBetweenNegatives(arr, size);
        cout << "Сумма элементов массива с нечетными номерами: " << sum1 << endl;
        cout << "Сумма элементов массива между первым и последним отрицательными: " << sum2 << endl;
        break;
    case 2:
        cout << "Введите номер столбца: ";
        cin >> column;
        found = false;
        for (int i = 0; i < size; i++) {
            if (i % size == column - 1) {
                found = true;
                arr[i] *= 2;
            }
        }
        if (found) {
            cout << "Элементы столбца " << column << " умножены на 2." << endl;
        }
        else {
            cout << "Столбец " << column << " не найден." << endl;
        }
        break;
    default:
        cout << "Некорректный выбор." << endl;
        break;
    }

    delete[] arr; // освобождение памяти, выделенной под массив
    return 0;
}