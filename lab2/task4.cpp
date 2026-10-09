#include <iostream>
#include <string>
#include <clocale>
using namespace std;

void process(int value) {
    static int state = 0;              // статическая переменная, инициализируется один раз
    cout << value + state << endl;
    state = value;                     // сохраняем переданное значение
}


int main() {
    setlocale(LC_ALL, "Russian");
    process(5);   // 5 + 0 = 5   -> state = 5
    process(3);   // 3 + 5 = 8   -> state = 3
    process(10);  // 10 + 3 = 13 -> state = 10
    process(10);  // 10 + 10 = 20 -> state = 10
    return 0;
}
