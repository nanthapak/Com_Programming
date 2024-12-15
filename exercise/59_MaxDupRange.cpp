#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec;
    vector<pair<int, pair<int, int>>> ans;  
    string s;
    int n;
    getline(cin, s);
    istringstream stream(s);

    while (stream >> n) {
        vec.push_back(n);
    }

    int start = 0;
    int max_length = 1;


    for (int i = 0; i < vec.size(); i++) {
        if (i < vec.size() - 1 && vec[i] == vec[i + 1]) {
            continue;
        }
        int length = i - start + 1;
        if (length > max_length) {
            ans.clear(); 
            max_length = length;
        }
        if (length == max_length) {
            ans.push_back({vec[start], {start, i}});
        }
        start = i + 1;
    }


    sort(ans.begin(), ans.end());


    for (const auto &entry : ans) {
        cout << entry.first << " --> x[ " << entry.second.first << " : " << entry.second.second + 1 << " ]" << endl;
    }

    return 0;
}
