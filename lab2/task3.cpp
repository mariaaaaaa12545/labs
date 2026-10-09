#include <iostream>
#include <string>
#include <clocale>
using namespace std;

// сумма чисел от 1 до n
int sumton(int n = 1) {                 // 11: параметр по умолчанию = 1
    if (n <= 0) return 0;               // 10: 0 или отрицательное -> 0
    int sum = 0;
    for (int i = 1; i <= n; i++) sum += i;
    return sum;
}

// 12-13: две ссылки
void calcRefs(int a, int b, int& sumRef, int& prodRef) {
    sumRef = a + b;      // 13: в первую ссылку - сумма
    prodRef = a * b;      // 13: во вторую ссылку - произведение
}

int main() {
    setlocale(LC_ALL, "Russian");
    //1: массив 2x3
    int arr2d[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // 2: сумма всез чисел
    int totalSum = 0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            totalSum += arr2d[i][j];
    cout << "Сумма всех чисел массива: " << totalSum << endl;

    // 3-4: Одномерный массив - суммы по столбцам
    int colSums[3] = { 0, 0, 0 };
    for (int j = 0; j < 3; j++)
        for (int i = 0; i < 2; i++)
            colSums[j] += arr2d[i][j];

    cout << "Суммы по столбцам: ";
    for (int j = 0; j < 3; j++) cout << colSums[j] << " ";
    cout << endl;

    // 6-9: Ссылки на переменную типа float
    float value = 20.84f;               // 6
    float& ref1 = value;                // 7: первая ссылка
    float& ref2 = value;                // 7: вторая ссылка

    ref1 = 5.67f;                      // 8: меняем через ссылку

    // 9: проверяем, что все три изменились
    cout << "value = " << value
        << ", ref1 = " << ref1
        << ", ref2 = " << ref2 << endl;

    // 10-11: Проверка функции sumToN
    cout << "sumToN(-5) = " << sumton(-5) << endl;   // 0
    cout << "sumToN(0)  = " << sumton(0) << endl;   // 0
    cout << "sumToN(5)  = " << sumton(5) << endl;   // 15
    cout << "sumToN()   = " << sumton() << endl;   // 1 (по умолчанию)

    // 12-14: Функция с ссылками 
    int x = 7, y = 3;
    int s = 0, p = 0;
    calcRefs(x, y, s, p);               
    cout << "sum = " << s << ", prod = " << p << endl;  // 10 и 21

    // 15: Переменная любого типа
    string h = "hello";
    cout << h << endl;

    // 16-18: Цикл
    for (int i = 0; i < 3; i++) {
        // 16: выводим переменную из п.1 три раза
        cout << "arr2d[0][0] = " << arr2d[0][0] << endl;

        // 17: переменная внутри цикла
        int x = 100 + i;

        // 18: выводим её 3 раза
        cout << x << endl;
        cout << x << endl;
        cout << x << endl;
    }
    return 0;
}
