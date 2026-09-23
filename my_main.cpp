#include <iostream>

int a = 84;
float b = 10.67;

void print(int a, float b)
{
    std::cout << "a = " << a << " b = " << b << std::endl;
}

int sum(int a, int b)
{
    return a + b;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    print(a, b);

    std::cout << "Сумма 6 и 20 равна = " << sum(6, 20) << std::endl;

    return 0;
}
