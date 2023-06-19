#include <iostream>
#include "calculator.h"

int main() {

    int num1, num2;
    char optr;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Enter the operator: ";
    std::cin >> optr;

    if (optr != '/') {

        std::cout << "Answer: " << calculator (num1, num2, optr);
    }

    else if (num2 != 0 && optr == '/') {

        std::cout << "Answer: " << calculator (num1, num2, optr);

    }

    else {

        std::cout << "Invalid input for second number. It must be not equal to zero\n";

    }


}