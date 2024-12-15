#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    string s;
    string Real[10] = {"Robert", "William", "James", "John", "Margaret", "Edward", "Sarah", "Andrew", "Anthony", "Deborah"};
    string Nick[10] = {"Dick", "Bill", "Jim", "Jack", "Peggy", "Ed", "Sally", "Andy", "Tony", "Debbie"};

    cin >> N;
    cin.ignore();

    for (int i = 0; i < N; ++i) {
        getline(cin, s);
        bool found = false;

        for (int j = 0; j < 10; ++j) {
            if (s == Real[j]) {
                cout << Nick[j] << endl;
                found = true;
                break;
            } else if (s == Nick[j]) {
                cout << Real[j] << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Not found" << endl;
        }
    }

    return 0;
}
