#include <iostream>   // Подключаем библиотеку для ввода-вывода (std::cout, std::cin)
#include <clocale>    // Подключаем библиотеку для настройки локали (русский язык в консоли)

int main() {
    setlocale(LC_ALL, "Russian");  // Устанавливаем русскую локаль для корректного вывода кириллицы

    double a, b;
    std::cout << "Введите первое число: ";  
    std::cin >> a;                         
    std::cout << "Введите второе число: "; 
    std::cin >> b;                         

    double average = (a + b) / 2.0;
    // 2.0 (а не 2), чтобы деление было вещественным, а не целочисленным
    std::cout << "Среднее арифметическое: " << average << std::endl;

    std::cout << "Введите знак операции (+, -, *, /): ";  
    char op;        //char для хранения одного символа операции
    std::cin >> op;



   //условный оператор if-else
   /*
   if (operation == '+') {
       cout << "Результат: " << num1 + num2 << endl;
   }
   else if (operation == '-') {
       cout << "Результат: " << num1 - num2 << endl;
   }
   else if (operation == '*') {
       cout << "Результат: " << num1 * num2 << endl;
   }
   else if (operation == '/') {
       if (num2 != 0) {
           cout << "Результат: " << num1 / num2 << endl;
       } else {
           cout << "Ошибка: деление на ноль!" << endl;
       }
   }
   else {
       cout << "Ошибка: неверный знак операции!" << endl;
   }
   */




    // через switch-case
    switch (op) {                                                     // Проверяем значение переменной op
    case '+':                                                     
        std::cout << "Результат: " << a + b << std::endl;         
        break;                                                    
    case '-':                                                    
        std::cout << "Результат: " << a - b << std::endl;      
        break;                                                    
    case '*':                                                   
        std::cout << "Результат: " << a * b << std::endl;        
        break;                                                    
    case '/':                                                   
        if (b != 0) {                                             // Проверяем деление на ноль
            std::cout << "Результат: " << a / b << std::endl;    
        }
        else {
            std::cout << "Ошибка: деление на ноль!" << std::endl; // Сообщаем об ошибке
        }
        break;                                                    
    default:                                                      // Если ни один case не сработал
        std::cout << "Неизвестная операция!" << std::endl;        
        break;                                                   
    }

    return 0;  // Возвращаем 0 — программа завершилась успешно
} 
