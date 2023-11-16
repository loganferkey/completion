#include <iostream>

int main() {

    char op;
    double left;
    double right;
    double result = 0;

    std::cout << "\n\033[1;34m[========== Calculator ==========]\033[0m\n";

    std::cout << "Enter operation (*/+-): ";
    std::cin >> op;

    std::cout << "Enter your first number: ";
    std::cin >> left;

    std::cout << "Enter your second number: ";
    std::cin >> right;

    std::cout << "\033[1;34m[================================]\033[0m\n";

    switch (op) {
        case '+':
            result = left + right;
            break;
        case '-':
            result = left - right;
            break;
        case '*':
            result = left * right;
            break;
        case '/':
            result = left / right;
            break;
    }

    std::cout << "Your number is: " << result;

    return 0;

}