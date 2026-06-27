#include <iostream>
#include "MathUtils.h" // Including our custom header

int main() {
    int num1 = 10;
    int num2 = 5;

    // Using the functions from the header file
    std::cout << "Addition: " << add(num1, num2) << std::endl;
    std::cout << "Multiplication: " << multiply(num1, num2) << std::endl;

    return 0;
}