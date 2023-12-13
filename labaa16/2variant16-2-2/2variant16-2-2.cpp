#include <iostream>
#include <cstdarg>

int fsum(int n, ...) {
    va_list args;
    va_start(args, n);

    int result = 0;

    if (n < 2) {
        std::cerr << "Error: Insufficient number of arguments." << std::endl;
        va_end(args);
        return 0;

        int current = va_arg(args, int);
        for (int i = 1; i < n; i++) {
            int next = va_arg(args, int);
            result += current * next;
            current = next;
        }

        va_end(args);
        return result;
    }
}

int main() {
    std::cout << fsum(6, 4, 5, 1, 2, 3, 2) << std::endl;
    std::cout << fsum(2, 34, 4445) << std::endl;
    std::cout << fsum(6, 4, 5, 1, 2, 5, 7) << std::endl;

    return 0;
}
