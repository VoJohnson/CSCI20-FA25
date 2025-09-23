#include <cstdio> //includes printf library
#include <array> //includes array library
#include <string> //includes string library
#include <vector> //includes vector library

int main() {

    std::array<int, 10> A = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; // Array of integers with a size of 10.

        std::printf("A:%d\n", A.at(0)); // Print first element of array in order as "0, 1, 2, 3, etc..."

    std::array<char, 5> B = {'a', 'b', 'c', 'd', 'e'}; // Array of characters with a size of 5.

        std::printf("B:%c\n", B.at(0)); // Print first element of array in order as "0, 1, 2, 3, etc..."

    std::array<std::string, 2> D = {"whats", "up"}; // string of words with a size of 2.

        std::printf("%s\n", D.at(0).c_str()); // print the first word of the string using operator

    std::vector

    return 0;
}