#include <map>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;

bool customsort(pair<string, int>& a, pair<string, int>& b) {
    return a.second < b.second;
}

int main() {
    int n;
    map<string, pair<vector<string>, int>> mm;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; ++i) {
        vector<string> vec;
        string line, s1;
        getline(cin, line);
        stringstream ss(line);
        while (ss >> s1) {
            vec.push_back(s1);
        }
        string ID;
        ID = vec[0];
        if (vec.size() > 1) {
            vec.erase(vec.begin());
            vec.erase(vec.end() - 1);
        }
        mm[ID] = { vec, i };
    }
    
    string per;
    getline(cin, per);

    // Check if `per` exists in `mm`
    if (mm.find(per) == mm.end()) {
        cout << ">> Not Found";
        return 0;
    }

    bool pass = true;
    vector<pair<string, int>> ans;
    for (auto x : mm[per].first) {
        for (auto y : mm) {
            if (y.first != per) {
                for (auto z : y.second.first) {
                    if (x == z) {
                        ans.push_back({ y.first, y.second.second });
                        pass = false;
                        break;
                    }
                }
            }
        }
    }

    vector<pair<string, int>> ans2;
    for (int i = 0; i < ans.size(); i++) {
        if (none_of(ans2.begin(), ans2.end(), [&](const pair<string, int>& p) { return p.first == ans[i].first; })) {
            ans2.push_back({ ans[i].first, ans[i].second });
        }
    }

    if (pass) {
        cout << ">> Not Found";
    }
    else {
        sort(ans2.begin(), ans2.end(), customsort);
        for (auto w : ans2) {
            cout << ">> " << w.first << endl;
        }
    }
}
