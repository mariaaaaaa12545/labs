#include <iostream>
#include <clocale>    // Подключаем библиотеку для настройки локали (русский язык в консоли)


int main() {
    setlocale(LC_ALL, "Russian");  // русская локаль
    int n;
    while (true) {
        std::cout << "Введите целое положительное число: ";
        std::cin >> n;
        if (n > 0) {
            break;
        }
        std::cout << "Ошибка! Число должно быть положительным. Попробуйте снова." << std::endl;
    }

 
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
        if (i < n) {
            std::cout << i << " + ";
        }
        else {
            std::cout << i;
        }
    }
    std::cout << " = " << sum << std::endl;

    int arr[10] = { 5, 12, 7, 23, 8, 15, 3, 19, 42, 11 };

  
    std::cout << "\nВсе элементы массива:" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i];
        if (i < 9) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    //числа на чётных позициях (индексы 0, 2, 4, 6, 8)
    std::cout << "\nЭлементы на чётных позициях (индексы 0, 2, 4, 6, 8):" << std::endl;
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
        }
    }

    // сумма элементов на нечётных позициях (индексы 1, 3, 5, 7, 9)
    int sumOdd = 0;
    for (int i = 0; i < 10; i++) {
        if (i % 2 != 0) {
            sumOdd += arr[i];
        }
    }
    std::cout << "\nСумма элементов на нечётных позициях: " << sumOdd << std::endl;

    return 0;
}
