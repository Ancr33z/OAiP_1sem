#include <iostream>
using namespace std;

char* removeBs(const char* input) {
    int length = 0;
    while (input[length] != '\0') {
        ++length;
    }

    char* result = new char[length + 1];

    char* resultPtr = result;

    for (int i = 0; i < length; ++i) {
        if (input[i] != 'b') {
            *resultPtr = input[i];
            ++resultPtr;
        }
    }

    *resultPtr = '\0';
    return result;
}

int main() {
    setlocale(LC_ALL, "ru");

    const int maxStringLength = 100;
    char* inputText = new char[maxStringLength];

    cout << "Введите строку: ";
    cin.getline(inputText, maxStringLength);


    char* resultText = removeBs(inputText);


    cout << "Исходный текст: " << inputText << endl;
    cout << "Текст без букв 'b': " << resultText << endl;


    delete[] resultText;


}