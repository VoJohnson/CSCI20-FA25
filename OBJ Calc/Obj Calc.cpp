#include "Obj Header.hpp"

int main() {
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

    return 0;
}

void Calc::machine(vector<stuff> x) {
    map(x);
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