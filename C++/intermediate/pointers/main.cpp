#include <iostream>

int main(int argc, char *argv[]) {

    std::string name = "Barack Obama";
    std::string *pName = &name; // set the pointer to the memory address of the name [string]

    // to access the value at the address stored in the pointer use the dereference operator
    std::cout << *pName;

    return 0;

}