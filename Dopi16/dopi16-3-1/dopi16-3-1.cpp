#include <iostream>
//#include<ctime>


using namespace std;

void findAndReduce(int** matrix, int& rows, int& cols) {
    int sum = 0;


    for (int i = 0; i < rows; ++i) {
        bool allPositive = true;
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] <= 0) {
                allPositive = false;
                break;
            }
        }
        if (allPositive) {

            for (int j = 0; j < cols; ++j) {
                sum += matrix[i][j];
            }


            for (int k = 0; k < rows; ++k) {
                for (int l = 0; l < cols; ++l) {
                    matrix[k][l] -= sum;
                }
            }


            cout << "Первая строка, все элементы которой положительны: " << sum << endl;
            return;
        }
    }


    cout << "В матрице нет строк с положительными элементами.\n";
}

void deallocateMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
    //srand((unsigned)time(NULL));
    setlocale(LC_ALL, "rus");
    int rows, cols;

    cout << "Введите размер матрицы (строки и столбцы): ";
    cin >> rows >> cols;

    int** matrix = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }


    cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
            //matrix[i][j] = rand() % 100-50;
           //cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


    findAndReduce(matrix, rows, cols);


    cout << "Итоговая матрица:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


    deallocateMatrix(matrix, rows);

    return 0;
}