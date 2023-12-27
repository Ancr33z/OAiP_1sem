#include <iostream>

char* transformString(const char* input) {
    int resultLength = 0;


    for (int i = 0; input[i] != '\0'; ++i) {
        resultLength++;
        if (input[i] == 'a') {
            resultLength++;
        }
    }

    char* result = new char[resultLength + 1];

    int resultIndex = 0;

    for (int i = 0; input[i] != '\0'; ++i) {
        result[resultIndex++] = input[i];
        if (input[i] == 'a') {
            result[resultIndex++] = '!';
        }
    }

    result[resultIndex] = '\0';

    return result;
}

int main() {
    setlocale(LC_ALL, "RUS");
    const int maxLength = 100;
    char inputString[maxLength];

    std::cout << "Введите строку: ";
    std::cin.getline(inputString, maxLength);

    char* transformedString = transformString(inputString);

    std::cout << "Преобразованная строка: " << transformedString << std::endl;

    delete[] transformedString;

    return 0;
}