#include <cstdio> //includes printf library
#include <array> //includes array library
#include <string> //includes string library
#include <vector> //includes vector library

int main() {

    std::array<int, 10> A = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; // Array of integers with a size of 10.

        std::printf("A: %i\n", A.at(0)); // Print first element of array in order as "0, 1, 2, 3, etc..."

    std::array<char, 5> B = {'A', 'B', 'C', 'D', 'E'}; // Array of characters with a size of 5.

        std::printf("B: %c\n", B.at(0)); // Print first element of array in order as "0, 1, 2, 3, etc..."

    std::array<std::string, 2> C = {"Hi", "Hello"}; // string of words with a size of 2.

        std::printf("C: %s\n", C.at(0).c_str()); // print the first word of the string using operator

    std::vector<int> D = {1, 2, 3}; // vector of integers

        std::printf("D: %i\n", D.front()); // Print first element of vector 

    std::vector<std::string> E = {"I", "Love", "Food"}; // Vector string of characters

        std::printf("E: %s\n", E.front().c_str()); // Print first element

    std::vector<char> F = {'A', 'B', 'C'}; // Vector of characters

        std::printf("F: %c\n", F.front()); // Print first element of chracters

    return 0;
}