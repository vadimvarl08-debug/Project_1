#include <iostream>

int a = 84;
float b = 10.67;

void print(int a, float b)
{
    std::cout << "a = " << a << " b = " << b << std::endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    print(a, b);

    return 0;
}
