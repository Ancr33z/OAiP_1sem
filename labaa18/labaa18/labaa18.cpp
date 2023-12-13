#include <iostream>
#include <cstdio>

int main() {
    setlocale(LC_CTYPE, "Russian");

    // Открываем файлы fA и fB для чтения
    FILE* fileA;
    if (fopen_s(&fileA, "fA.txt", "rt") != 0) {
        std::cerr << "Ошибка открытия файла fA.txt" << std::endl;
        return 1;
    }

    FILE* fileB;
    if (fopen_s(&fileB, "fB.txt", "rt") != 0) {
        std::cerr << "Ошибка открытия файла fB.txt" << std::endl;
        fclose(fileA);
        return 1;
    }

    // Читаем количество столбцов в каждой матрице из начала файлов
    int columnsA, columnsB;
    if (fscanf_s(fileA, "%d", &columnsA) != 1 || fscanf_s(fileB, "%d", &columnsB) != 1) {
        std::cerr << "Ошибка чтения количества столбцов из файлов fA.txt или fB.txt" << std::endl;
        fclose(fileA);
        fclose(fileB);
        return 1;
    }

    if (columnsA != columnsB) {
        std::cerr << "Количество столбцов в матрицах не совпадает." << std::endl;
        fclose(fileA);
        fclose(fileB);
        return 1;
    }

    // Открываем файл fC для записи
    FILE* fileC;
    if (fopen_s(&fileC, "fC.txt", "w") != 0) {
        std::cerr << "Ошибка открытия файла fC.txt для записи" << std::endl;
        fclose(fileA);
        fclose(fileB);
        return 1;
    }

    // Записываем количество столбцов в матрицу C
    fprintf(fileC, "%d", columnsA);

    // Читаем матрицы из файлов и записываем сумму в файл fC
    float elementA, elementB;
    while (fscanf_s(fileA, "%f", &elementA, sizeof(elementA)) == 1 &&
        fscanf_s(fileB, "%f", &elementB, sizeof(elementB)) == 1) {
        float sum = elementA + elementB;
        fprintf(fileC, " %f", sum);

        // Если достигнут конец строки в файле, переходим на новую строку в файлах A и B
        if (fgetc(fileA) == '\n' && fgetc(fileB) == '\n') {
            fprintf(fileC, "\n");
        }
    }

    // Закрываем все файлы
    fclose(fileA);
    fclose(fileB);
    fclose(fileC);

    std::cout << "Сумма матриц M1 и M2 записана в файл fC.txt" << std::endl;

    return 0;
}
    