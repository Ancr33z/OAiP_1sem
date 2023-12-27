#include <iostream>


bool hasZeroElement(int* row, int size) {
    for (int i = 0; i < size; ++i) {
        if (row[i] == 0) {
            return true;
        }
    }
    return false;
}


void replaceNegativesWithZeros(int* row, int size) {
    for (int i = 0; i < size; ++i) {
        if (row[i] < 0) {
            row[i] = 0;
        }
    }
}


void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
}


void deleteMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
    setlocale(LC_ALL, "RUS");
    int rows, cols;


    std::cout << "Введите количество строк: ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов: ";
    std::cin >> cols;


    int** matrix = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }


    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Введите элемент [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }


    bool allRowsHaveZero = true;
    for (int i = 0; i < rows; ++i) {
        if (!hasZeroElement(matrix[i], cols)) {
            allRowsHaveZero = false;
            break;
        }
    }

    if (allRowsHaveZero) {
        std::cout << "В каждой строке есть хотя бы один нулевой элемент.\n";

    }
    else {
        for (int i = 0; i < rows; ++i) {
            replaceNegativesWithZeros(matrix[i], cols);
        }

        std::cout << "Значения отрицательных элементов заменены на нули.\n";
    }


    std::cout << "Матрица после проверки и замены:\n";
    printMatrix(matrix, rows, cols);

    deleteMatrix(matrix, rows);

    return 0;
}