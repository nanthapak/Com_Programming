#include <map>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include<cmath> 
using namespace std;
int k=0;
int H(int n) { // Tower of Hanoi
    if(n>=1){
        return (2*(H(n-1)))+1;
    }
    else{
        return 0;
    }
}
int C(int n) { // Catalan Number
    if (n == 0) { // Base case
        return 1;
    }

    int result = 0;
    for (int k = 0; k < n; k++) { // Recursive case
        result += C(k) * C(n - 1 - k);
    }
    
    return result;
}

int F(int n);
int M(int n);

int F(int n) { // Female sequence
    if(n>0){
        return n-(M(F(n-1)));
    }
    else{
        return 1;
    }
}
int M(int n) { // Male sequence
    if(n>0){
        return n-(F(M(n-1)));
    }
    else{
        return 0;
    }
}
int main() {
    map<string, int(*)(int)> func = {{"H",H}, {"C",C}, {"F",F}, {"M",M}};
    string fn;
    int p;
    while (cin >> fn >> p) {
        if (func.find(fn) != func.end())
            cout << fn << '(' << p << ") = " << func[fn](p) << endl;
    }
    return 0;
}
