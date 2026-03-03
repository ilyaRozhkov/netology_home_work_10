#include <iostream>
#include <windows.h>


int** create_two_dim_array(int rows, int cols) {
    int** arr = new int* [rows];

    for (int i = 0; i < rows; ++i) {
        arr[i] = new int[cols];
    }

    return arr;
}

void fill_two_dim_array(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = (i + 1) * (j + 1);
        }
    }
}

void print_two_dim_array(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "\t" << arr[i][j];
        }
        std::cout << std::endl; 
    }
}

void delete_two_dim_array(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
}

int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int rows, cols;

    std::cout << "Введите количество строк: ";
    std::cin >> rows;
    
    if (rows <= 0) {
        std::cout << "Значение должно быть больше нуля";
    }

    std::cout << "Введите количество столбцов: ";
    std::cin >> cols;

    if (cols <= 0) {
        std::cout << "Значение должно быть больше нуля";
    }

    int** table = create_two_dim_array(rows, cols);

    fill_two_dim_array(table, rows, cols);

    std::cout << "Таблица умножения:" << std::endl;
    print_two_dim_array(table, rows, cols);

    delete_two_dim_array(table, rows, cols);

    return 0;
}
