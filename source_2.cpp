#include <iostream>
#include <windows.h>


double* create_array(int size) {
    double* arr = new double[size]();

    return arr;
}

int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int size;

    std::cout << "Введите размер массива: ";
    std::cin >> size;
    if (size <= 0) {
        std::cout << "Введенное значение должно быть больше нуля";

        return 0;
    }

    double* arr = create_array(size);

    std::cout << "Введённый массив: ";

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    delete[] arr;
    return 0;
}
