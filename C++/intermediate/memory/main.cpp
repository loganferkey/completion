#include <iostream>

void swap(std::string &first, std::string &last) {
    std::string temp;
    temp = first;
    first = last;
    last = temp;
}

int main(int argc, char *argv[]) {

    // memory address = a location in memory where data is stored
    // a memory can be accessed with & (address-of operator)

    std::string name = "Barack Obama";
    int age = 21;
    bool president = true;

    // memory addresses are determined by data type in order to store the correct amount of memory for type (strings are 32 bytes as they're large)

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &president << '\n';

    // pass by value vs. pass by reference
    // by default passing values into function parameters are copied into the function
    // passing by memory address instead allows manipulation of original data

    std::string x = "X";
    std::string y = "Y";

    swap(x, y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';
    
    return 0;

}