#include <iostream>
#include <bitset>

void main() {
    using namespace std;

    setlocale(LC_ALL, "Russian");

    int A, B, n, p, m, q;

    cout << "Введите целое число A: ";
    cin >> A;

    cout << "Введите целое число B: ";
    cin >> B;

    cout << "Введите количество битов n ";
    cin >> n;

    cout << "Введите позицию p ";
    cin >> p;

    cout << "Введите количество битов m ";
    cin >> m;

    cout << "Введите позицию q ";
    cin >> q;


    int maskB = ((1 << m) - 1) << q;
    int maskA = ((1 << n) - 1) << p;
    int bitsFromA = (A & maskA) >> p;
    B = (B & ~maskB) | (bitsFromA << q);
    int invertMask = ((1 << n) - 1) << p;
    A ^= invertMask;



    cout << "Изменённое число A в двоичной системе: " << bitset<32>(A) << endl;
    cout << "Изменённое число B в двоичной системе: " << bitset<32>(B) << endl;
}