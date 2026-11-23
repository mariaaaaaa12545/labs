#include <iostream>
#include <clocale>

void printArray(int array[], int length) {
    for (int i = 0; i < length; i++) {
        std::cout << array[i] << std::endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n = 567;
    int* ptr = &n;
    std::cout << "адрес указателя: "<< ptr <<std::endl;
    std::cout << "значение указателя: " << *ptr << std::endl;
    *ptr = 100;
    std::cout << "новое значение переменной: " << n << "\n";


    int array[] = { 6,7,8,7,6,7};
    int length = sizeof(array) / sizeof(array[0]);
    printArray(array, length);

    int p = 5;
    int x = 5;
    int* const pp = &p;

    std::cout << pp << " = " << *pp << "\n";
    *pp = 25;
    std::cout << pp << " = " << *pp << "\n";

    std::cout << "p" << " = " << p << "\n";

    //pp = &x;//ошибка
}
