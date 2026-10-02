#include <iostream>   //библиотекa для работы с потоками ввода-вывода (std::cout)
#include <clocale>    //для настройки локали (для русского текста)
#include <string>     //для работы со строками std::string

int main() {  // 
    setlocale(LC_ALL, "Russian"); 


    int myInt = 150;


    float myFloat = 15.933f;  //переменная, 4 байта; суффикс f указывает, что это float, а не double
    unsigned char mySmall = 250;  // unsigned char — 1 байт (8 бит), диапазон 0..255, значение 250 помещается

    std::cout << "myInt = " << myInt << std::endl; 
    std::cout << "myFloat = " << myFloat << std::endl;
    std::cout << "mySmall = " << (int)mySmall << std::endl;

    int birthDay = 25;             
    std::string birthMonth = "октября";     
    int birthYear = 2007;               

    std::cout << "Моя дата рождения: " << birthDay << " " << birthMonth << " " << birthYear << " года" << std::endl;



    const float PI_LIKE = 2.3f;              
    const std::string OS_NAME = "WINDOWS";  

    std::cout << PI_LIKE << " " << OS_NAME << std::endl;

    return 0;  // Возвращаем 0 — программа завершилась успешно
}
