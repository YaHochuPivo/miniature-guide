// massive.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <vector>

int main() {
    SetConsoleCP(1251);
    setlocale(LC_ALL, "");
    // Создаем двумерный массив
    std::vector<std::vector<double>> array(3, std::vector<double>(5));

    // Вводим элементы массива с клавиатуры
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << "Введите элемент массива [" << i << "][" << j << "]: ";
            std::cin >> array[i][j];
        }
    }

    // Вычисляем среднее арифметическое элементов строк
    for (int i = 0; i < 3; ++i) {
        double sum = 0;
        for (int j = 0; j < 5; ++j) {
            sum += array[i][j];
        }
        double avg = sum / 5;
        std::cout << "Среднее арифметическое элементов строки " << i << ": " << avg << std::endl;
    }

    return 0;
}
