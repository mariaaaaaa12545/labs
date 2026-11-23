int sumArray(const int* a, const int* b) {
    int sum = 0;
    for (const int* ptr = a; ptr != b; ++ptr) {
        sum += *ptr;
    }
    return sum;
}

int sum2(int a, int b) {
    return a + b;
}

int nesum2(int a, int b) {
    return a - b;
}

int (*f(char op))(int, int) {

    if (op == '+') {
        return sum2;
    }

    else if (op == '-') {
        return nesum2;
    }
}


int main() {
    setlocale(LC_ALL, "Russian");
    const int array[] = { 6,7,6,7 };
    int size = sizeof(array) / sizeof(array[0]);
    std::cout << sumArray(array,array+size) << "\n";

    std::cout << f('+')(6,7) << std::endl;
    std::cout << f('-')(6, 7) << std::endl;


    float* dinamic = new float(5.67);
    std::cout << *dinamic << std::endl;
    delete dinamic;
}
