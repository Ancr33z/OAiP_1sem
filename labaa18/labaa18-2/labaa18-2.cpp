#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    int n, num;

    printf("Введите количество повторений (10 положительных и 10 отрицательных считать как одно повторение): ");
    scanf_s("%d", &n);
    FILE* f;
    FILE* k;
    FILE* g;

    fopen_s(&f, "f.txt", "w");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 10; j++) {
            fprintf(f, " %d", (rand() % 90 + 10));
        }
        for (int j = 0; j < 10; j++) {
            fprintf(f, " %d", -(rand() % 90 + 10));
        }
    }
    fclose(f);
    fopen_s(&f, "f.txt", "r");
    fopen_s(&g, "g.txt", "w");

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 5; ++j) {
            fscanf_s(f, "%d", &num);
            fprintf(g, " %d", num);
        }
        fopen_s(&k, "k.txt", "w");
        for (int j = 0; j < 5; ++j) {
            fscanf_s(f, "%d", &num);
            fprintf(k, " %d", num);
        }

        for (int j = 0; j < 5; ++j) {
            fscanf_s(f, "%d", &num);
            fprintf(g, " %d", num);
        }
        fclose(k);
        fopen_s(&k, "k.txt", "r");
        for (int j = 0; j < 5; ++j) {
            fscanf_s(k, "%d", &num);
            fprintf(g, " %d", num);
        }
         fclose(k);
        for (int j = 0; j < 5; ++j) {
            fscanf_s(f, "%d", &num);
            fprintf(g, " %d", num);
        }
    }

    fclose(f);
    fclose(g);

    cout << "Числа записаны в файлы g.txt" << endl;

    return 0;
}
