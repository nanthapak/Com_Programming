#include <set>
#include <iostream>
#include <string>
using namespace std;


int main() {
    string s1, s2;
    multiset<char> one, two;
    getline(cin, s1);
    getline(cin, s2);

    for (char c : s1) {
        if (c != ' ') {
            one.insert(tolower(c));
        }
    }
    for (char c : s2) {
        if (c != ' ') {
            two.insert(tolower(c));
        }
    }

    if (one==two) {
        cout << "Yes"<<endl;
    } else {
        cout << "NO"<<endl;
    }
}
