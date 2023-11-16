#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

namespace ANSI {
    const std::string magenta = "\033[35m";
    const std::string yellow = "\033[93m";
    const std::string cyan = "\033[36m";
    const std::string green = "\033[92m";
    const std::string red = "\033[91m";
    const std::string r = "\033[0m";
};

class Bank {
    private:
        // Insanely encapsulated
        int balance = 0;
    public:
        double viewBalance() {
            return this->balance;
        }
        double deposit(double amount) {
            this->balance += amount;
            return this->balance;
        }
        double withdraw(double amount) {
            if (amount < 1) {
                std::cout<<ANSI::red<<"[ERROR] Enter a number greater than 0.\n"<<ANSI::r;
                return -1;
            }
            if (amount > this->balance) {
                std::cout<<ANSI::red<<"[ERROR] You do not have enough available funds to withdraw.\n"<<ANSI::r;
                return -1;
            } else {
                this->balance -= amount;
                return this->balance;
            }
        }
};

int main(int argc, char* argv[]) {

    Bank *gBank = new Bank();
    int exit = 0;

    std::cout<<ANSI::yellow<<"===========================\n"<<ANSI::r;
    std::cout<<ANSI::cyan<<"Welcome to gBank!\n";
    std::cout<<"Type 'help' to get started!\n";
    std::cout<<ANSI::yellow<<"===========================\n"<<ANSI::r;

    while (!exit) {

        std::cout<<"\033[5m> "<<ANSI::r;
        std::string input;
        std::getline(std::cin, input);

        // parse input string
        std::transform(input.begin(), input.end(), input.begin(), ::tolower); // make it lowercase
        // split input string into an array of commands
        std::vector<std::string> commands;
        std::istringstream(input) >> std::noskipws >> std::istream_iterator<std::string>(std::back_inserter(commands));

        if (!commands.empty()) {
            switch (commands[0]) {
                case "exit":
                    // close the program
                    exit = 1;
                    break;
                default:
                    std::cout << "Enter a command or type 'help' to get more information\n";
                    break;
            }
        }

    }

    delete gBank;

    return 0;

}