#include <iostream>
#include <cmath>

int main() {

    double a;
    double b;
    double c;

    std::cout << "[[Pythagoreas Calculator]]" << '\n';

    std::cout << "Enter triangle side A: ";
    std::cin >> a;

    std::cout << "Enter triangle side B: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "Side C is: " << c;

    return 0;

}