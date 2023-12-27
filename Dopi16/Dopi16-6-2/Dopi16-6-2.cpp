#include <iostream>

int as(int n, ...) {
    int* p = &n;
    int result = 0, current, next;
    *(p++);
    *(p++);
    for (int i = 0; i < n * 2 - 2; i += 2) {
        current = *(p + i);
        next = *(p + i + 2);


        if (i % 4 == 0) {
            result += current * next;
        }
        else {
            result -= current * next;
        }
    }

    return result;
}

int main() {
    std::cout << as(4, 4, 5, 1, 2) << std::endl;
    std::cout << as(2, 34, 4445) << std::endl;
    std::cout << as(6, 4, 5, 1, 2, 5, 7) << std::endl;

    return 0;
}