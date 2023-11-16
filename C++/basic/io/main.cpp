#include <iostream>
#include <string>

int main() {

    // Query the user for their name and age
    std::string name;
    int age;

    std::cout << "What's your name? ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "What's your age? ";
    std::cin >> age;

    std::cout << "Hello, " << name << " you are " << age << " years old...";

    return 0;

}