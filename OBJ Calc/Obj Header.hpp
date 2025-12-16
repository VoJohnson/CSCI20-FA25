#include <cstdio>
#include <stack>
#include <vector>

using std::vector;
using std::stack;
using std::printf;

/*
stack calculator built using a monolithic object.

this means that the object will obfuscate the structure (stack) of evaulation. [solved]
    - stack in private of class

this object represents something like a simple calculator taking numbers and evaulating

- problem: representing numbers and operations [solved]
    we need an encoding for the numbers and operations of our calculator,
        lets use a struc and operations of our calculator, lets use a struct.
    our structure houses numbers for eval and characters for operations
    the operations will represented by the following:
    - '+' addition
    - '*' subtraction
    - '^' multiplication
    - '5' division
    - 'e' evaluation (fail safe for evaluatable number detection)

- problem: what are the basic operations of this calculator [SOLVED]
    binary operators on which two numbers will be given (a,b)
    - addition: a + b
    - subtraction: a - b
    - multiplication: a * b
    - division: fractionalized a b: a/b
    - evaluation: symbolizes number for evaluation, termination operation

- problem: what structure defines the equations integrity preserving order. [SOLVED]
    stack<dicho> st.
    - stack of type dicho b/c dicho assist in evaulation operation encoding.

- problem: we need to be able to load this stack (st) in proper order. [UNSOLVED]
    - get data from user
        - How: 
        - Where: Constructor(limits object to single use) or function
            - take formatted user data map

- problem: we need a way to evaulate a full stack. [UNSOLVED]

*/

class Calc {
private:
    struct thing {
        int num;
        char op;
        thing(int a, char b) {
            num = a;
            op = b;
        }
    };
    stack<thing> gold;
    int addition(int, int);
    int subtraction(int, int);
    int multiplication(int, int);
    int division(int, int);
public:
// Calc() 
    struct stuff {
        int trash;
        char plastic;
        stuff(int a, char b) {
            trash = a;
            plastic = b;
        }
    };
    // tool function
    vector<thing> map(vector<stuff>);

    // loads the stack
    void machine(vector<stuff>); 
};