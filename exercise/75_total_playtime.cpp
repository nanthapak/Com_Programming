#include <map>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;


bool cmp(pair<string, int>& a, pair<string, int>& b) {
    return a.second > b.second; 
}


void customSort(map<string, int>& test) {
    vector<pair<string, int>> A(test.begin(), test.end()); 

    sort(A.begin(), A.end(), cmp);

    // Ensure we don't access out of bounds
    for (int i = 0; i < min(3, (int)A.size()); i++) {
        int MIN = A[i].second / 60;
        int SEC = A[i].second % 60;
        cout << A[i].first << " --> "
             << MIN << ":" 
             << SEC << endl;
    }
}

int main() {
    string s, s1, s2, s3, s4;
    map<string, int> test;
    while (getline(cin, s) && !s.empty()) { 
        stringstream ss(s);
        ss >> s1 >> s2 >> s3 >> s4;
        
        int pos = s4.find(":");
        if (pos == string::npos) continue;

        int sec = stoi(s4.substr(pos + 1));
        int min = stoi(s4.substr(0, pos));
        sec = (min * 60) + sec;

        if (test.find(s3) == test.end()) {
            test[s3] = sec;
        } else {
            test[s3] += sec;
        }
    }

    customSort(test);
}
