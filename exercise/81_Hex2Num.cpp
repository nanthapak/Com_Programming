#include <map>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm> 
using namespace std;

string dec2hex(int d) {
    map<int,string> M;
    M[0]="0";
    M[1]="1";
    M[2]="2";
    M[3]="3";
    M[4]="4";
    M[5]="5";
    M[6]="6";
    M[7]="7";
    M[8]="8";
    M[9]="9";
    M[10]="A";
    M[11]="B";
    M[12]="C";
    M[13]="D";
    M[14]="E";
    M[15]="F";
    if(d<=15) return M[d];
    return dec2hex(d/16)+dec2hex(d%16);
}
int main() {
 int d;
 while (cin >> d) {
    cout << d << " -> " << dec2hex(d) << endl;
 }
 return 0;
} 