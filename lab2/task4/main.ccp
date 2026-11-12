#include <iostream>
#include "MyHW.h"
#include <string>
using namespace std;
using namespace NameSpace;

#define SUM(a, b) ((a) + (b))

int main() {
    process(5);   // 5 + 0 = 5   -> state = 5
    process(3);   // 3 + 5 = 8   -> state = 3
    process(10);  // 10 + 3 = 13 -> state = 10
    process(10);  // 10 + 10 = 20 -> state = 10
    int x = 7, y = 8;
    cout << SUM(x, y) << endl;
    return 0;
}
