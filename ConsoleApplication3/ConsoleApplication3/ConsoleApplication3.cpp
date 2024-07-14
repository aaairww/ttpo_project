#include <iostream>
#include <clocale>

int main() {
    setlocale(LC_ALL, "rus");
    int size;
    std::cout << "Введите размерность двумерного массива: ";
    std::cin >> size;

    int** array = new int* [size]; // Создание массива указателей

    // Выделение памяти под строки двумерного массива
    for (int i = 0; i < size; i++) {
        array[i] = new int[size];
    }

    // Заполнение массива и вычисление суммы чисел по главной диагонали
    int sum = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << "Введите элемент [" << i << "][" << j << "]: ";
            std::cin >> array[i][j];

            if (i == j) {
                sum += array[i][j]; // Сумма элементов по диагонали
            }
        }
    }

    // Вывод суммы элементов по диагонали
    std::cout << "Сумма чисел по главной диагонали: " << sum << std::endl;

    // Освобождение памяти
    for (int i = 0; i < size; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}