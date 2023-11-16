#include <iostream>
#include <vector>

// Namespaces to hold variables
namespace util {
    const int WIDTH = 1920;
}

namespace util2 {
    const int WIDTH = 2560;
}

// alias/nickname types, use type string_t instead of std::string
// Only use when there's a clear benefit of saving lots of annoying written types
using string_t = std::string;

int main() {

    std::cout << "Hello World..." << '\n';

    // Variable types
    int daysOfTheWeek = 7;
    double price = 10.99;
    char currency = '$';
    bool verified = 1;
    string_t name = "Logan";

    std::cout << daysOfTheWeek << '\n';
    std::cout << price << '\n';
    std::cout << currency << '\n';
    std::cout << verified << '\n';
    std::cout << name << '\n';

    std::cout << util::WIDTH << '\n';
    std::cout << util2::WIDTH << '\n';

    // Arithmetic operations
    daysOfTheWeek*=52;
    // /=
    // ++
    // --
    // % modulus/remainder
    // parenthesis > mult and division > addition and subtraction (duh)
    std::cout << daysOfTheWeek << '\n'; // daysOfTheWeek = daysOfTheWeek * 52;

    // type conversion (implicit/explicit)
    const int PI = 3.14;
    std::cout << PI << '\n'; // .14 is truncated as the type is int

    int questionsCorrect = 8;
    int totalQuestions = 13;
    double score = (questionsCorrect/(double)totalQuestions) * 100;
    std::cout << score << "%" << '\n';

    return 0;

}