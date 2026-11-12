#include <iostream>
#include <string>
using namespace std;
#include "MyHW.h"

namespace NameSpace {
    void process(int value) {
        static int state = 0;
        cout << value + state << endl;
        state = value;
    }
}
