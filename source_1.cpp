#include <iostream>
#include <windows.h>


int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int size;

    std::cout << "Введите размер массива: ";
    std::cin >> size;
    if (size < 0) {
        std::cout << "Введенное значение должно быть больше нуля";

        return 0;
    }

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        std::cout << "arr[" << i << "] = ";
        std::cin >> arr[i];
        std::cout << std::endl;
    }

    std::cout << "Введённый массив: ";

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }

    return 0;
}
