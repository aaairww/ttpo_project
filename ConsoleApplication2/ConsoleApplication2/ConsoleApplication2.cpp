#include <iostream>
#include <cstdlib>
#include <clocale>

int main() {
    setlocale(LC_ALL, "rus");
    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    int* array = new int[size];
    int sum = 0;

    // Заполнение массива случайными числами и вычисление суммы отрицательных чисел
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 201 - 100; // Генерация случайного числа от -100 до 100
        if (array[i] < 0) {
            sum += array[i];
        }
    }

    // Вывод сгенерированного массива
    std::cout << "Сгенерированный массив: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    // Вывод суммы отрицательных чисел
    std::cout << "Сумма отрицательных чисел: " << sum << std::endl;

    delete[] array; // Освобождение памяти после использования

    return 0;
}