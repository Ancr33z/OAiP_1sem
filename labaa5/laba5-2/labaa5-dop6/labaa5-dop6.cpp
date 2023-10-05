#include <iostream>
using namespace std;

int main()
{
    int k,n;
    scanf_s("%d", &k);
    int b = 1;
    n = 0;
    while (n < k-1) {
        b *= 2;
        int t = b;
        do {
            n++;
        } while (t /= 10);
    }
    for (int i = n - k; i > 0; i--) b /= 10;
    printf("%d", b % 10);
}