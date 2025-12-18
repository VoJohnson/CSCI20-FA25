#include "Obj Header.hpp"

stack<int> Calc::evaluate (stack<int>) st {
    
int main() {

    int x = st.top();
    st.pop();

    if (x == 9999) {
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();
        // check stack to see if anything is left
        if (st.empty()) {
            st.push(addition(y,z));
        } else {
            // reorganize the top of the stack to house the result
            int temp = st.top();
            st.pop();
            st.push(addition(y,z));
            st.push(temp);
            return evaluate(st);
        }
    } else if (x == 9998) {
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();
        st.push(subtraction(y,z));
    } else if (x == 9997) {
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();
        st.push(multiplication(y,z));
    } else if (x == 10001) {
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();
        st.push(division(y,z));
    } else {
        printf("FAIL\n");
    }

    return st;
}
    Calc calc;
    vector<Calc::stuff> load_eq = {};

    //test: 1 + 1
    Calc::stuff x(0, '+');
    Calc::stuff y(1, 'e');
    Calc::stuff z(1, 'e');

    load_eq.push_back(x);
    load_eq.push_back(y);
    load_eq.push_back(z);

    calc.machine(load_eq);

    // need a stack b/c stack BASED calculator
    stack<int> st  = {};

    // load the stack CAREFULLY
    st.push(9);
    st.push(9998);
    st.push(5);
    st.push(5);
    st.push(9999);

    // run evaluate to evaluate the stack as an equation
    st = calc.evaluate(st);

    // printing the result
    printf("result: %d\n", st.top());
    return 0;
}

void Calc::machine(vector<stuff> x) {
    vector<Calc::thing> map_result = map(x);
    for (int i=x.size();i>=0;i=i-1) {
        waste.push(map_result.at(i));
    }
    return ;
}

vector<Calc::thing> Calc::map(vector<Calc::stuff> x) {
    vector<Calc::thing> ret= {};
    for(int i=0;i<x.size();i=i+1) {
        // the set in the case of x.size = 3 i s[i-0,i=1,i=2, TERMINATE]
        // for each stuff, make a new thing
        thing c(x.at(i).trash, x.at(i).plastic);
        ret.push_back(c);
        printf("%d, %c\n", c.num, c.op);
    }
    return ret;
}
