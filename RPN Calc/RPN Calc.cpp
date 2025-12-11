#include "Header.hpp" // Header which includes cstdio, vector, and iostream

int main() {
    // Operand stack (Numbers)
    std::vector<int> l;

    // Operator stack ('*', '/', '-', & '+')
    std::vector<int> i;

    // Pre-fill manually 
    i.push_back('/'); // First on the stack
    l.push_back(4);
    i.push_back('*'); // operation to perform
    l.push_back(4);
    i.push_back('+');  // operation to perform
    l.push_back(3);
    i.push_back('-'); // operation to perform
    l.push_back(3);
    l.push_back(4); // Last on the stack
    
    // Operators
    while (!i.empty()) { 
        int Addition = i.back();
        int Subtraction = i.back();
        int Multiplication = i.back();
        int Division = i.back();

        i.pop_back();

        if (Multiplication == '*') {
            // Pop two operands
            int a = l.back(); l.pop_back();
            int b = l.back(); l.pop_back();

            //perform multiplication
            int result = a * b;
            
            //push result back
            l.push_back(result);

        }
        if (Division == '/') {
            // Pop two operands
            int a = l.back(); l.pop_back();
            int b = l.back(); l.pop_back();

            // Perform Division
            int result = a / b;

            // Push result back
            l.push_back(result);

        }
        if (Addition == '+') {
            // Pop two operands
            int a = l.back(); l.pop_back();
            int b = l.back(); l.pop_back();

            // Perform addition
            int result = a + b;

            // Push result back
            l.push_back(result);

        }
        if (Subtraction == '-') {
            // Pop two operands
            int a = l.back(); l.pop_back();
            int b = l.back(); l.pop_back();

            // Perform subtraction
            int result = a - b;
        
            // Push result back
            l.push_back(result);

        }
    }

    if (!l.empty()) { 
        printf("Result: %d\n", l.back()); // grab the number from the stack and print it
    }

    return 0;
}