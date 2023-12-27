#include <iostream>


int fsum(int n, ...) {
    int* p = &n;
    int result = 0, current, next;
    *(++p);
    *(++p);
    for (int i = 0; i < n * 2 - 2; i += 2) {
        current = *(p + i);
        next = *(p + i + 2);
        result += current * next;
    }

    return result;
}

int main() {
    // Пример использования
    std::cout << fsum(6, 3, 4, 1, 2, 3, 2) << std::endl;
    std::cout << fsum(2, 2, 4445) << std::endl;
    std::cout << fsum(7, 1, 2, 0, 4, 3, 7, 18) << std::endl;
    std::cout << fsum(8, 4, 5, 1, 2, 5, 7, 2, 7) << std::endl;

    return 0;
}