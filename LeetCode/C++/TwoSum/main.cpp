#include <iostream>
#include <chrono>
#include <functional>

namespace Solution {
    void problem(int arg1, int arg2) {
    }
};

namespace Benchmark {
    template <typename Func, typename... Args>
    double run(Func func, Args... args, int iterations = 1000) {
        auto start = std::chrono::high_resolution_clock::now();
        for (int i = 0; i < iterations; i++) {
            func(args...);
        }
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
        return static_cast<double>(duration.count()) / iterations;
    }
};

int main(int argc, char* argv[]) {

    std::string problem = "Given an array of integers [nums] and an integer [target], return indicies of the two numbers such that they add up to [target]";
    std::string hint = "You may assume that each input would have exactly one solution, and you may not use the same element twice";

    int arg1 = 1;
    int arg2 = 2;

    // Run test cases
    double time = Benchmark::run(Solution::problem(arg1, arg2));

    return 0;

}