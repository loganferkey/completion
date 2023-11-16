#include <iostream>

class Sort {
    public:
        static void printArray(int array[], int size) {
            for (int i = 0; i < size; i++) {
                char seperator = i < size - 1 ? ',' : ' ';
                std::cout<<array[i]<<seperator;
            }
        }
        static void bubble(int array[], int size) {
            int temp;
            for (int i = 0; i < size - 1; i++) {
                for (int j = 0; j < size - i - 1; j++) {
                    if (array[j] > array[j + 1]) {
                        // if left is greater than right swap the two
                        temp = array[j];
                        array[j] = array[j+1];
                        array[j+1] = temp;
                    }
                }
            }
        }
};

int main(int argc, char *argv[]) {

    srand(time(NULL));
    const int size = 10;
    int numbers[size];
    for (int i = 0; i < size; i++) {
        // range of 1-1000 for each number in array
        numbers[i] = (rand() % 1000) + 1;
    }

    // print array pre sort
    Sort::printArray(numbers, size);
    Sort::bubble(numbers, size);
    // print array post sort
    std::cout<<'\n';
    Sort::printArray(numbers, size);

    return 0;

}