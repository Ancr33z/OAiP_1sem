#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "ru");

    char arr[256], t[256];
    int n = 0;
    bool isWriting = false;

    cout << "Введите строку:\t";
    cin.getline(arr, 256);


    for (int i = 0; (arr[i] != '\0' && i != 256) && (t[n] != '\0'); i++) {

        if (arr[i] == '*') {
            if (isWriting) {
                t[n] = '\0';
            }
            isWriting = !isWriting;



        }
        else if (isWriting) {
            t[n] = arr[i];
            n++;
        }
    }
    cout << "Текст заключенный в '*'" << t << endl;
}