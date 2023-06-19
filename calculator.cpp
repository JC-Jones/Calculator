#include <iostream>

int calculator(int a, int b, char optr) {

    int result;

    switch (optr) {
        case '+':
        result = a + b;
        break;

        case '-':
        result = a - b;
        break;

        case '*':
        result = a * b;
        break;

        case '/':
        result = a / b;
        break;
    }

    return result;

}