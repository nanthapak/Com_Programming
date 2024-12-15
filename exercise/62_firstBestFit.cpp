#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <numeric>
using namespace std;


bool customComparator(const vector<int> a, const vector<int> b) {
    int sumA = accumulate(a.begin(), a.end(), 0); 
    int sumB = accumulate(b.begin(), b.end(), 0); 

    if (sumA != sumB) 
        return sumA > sumB;
    if (a.size() != b.size()) 
        return a.size() < b.size(); 
    return a < b; 
}

int main() {
    string s;
    string str;
    getline(cin, s);
    getline(cin, str);
    istringstream stream(str);
    vector<int> vec;
    vector<vector<int>> ans(1);
    int n;

    while (stream >> n) {
        vec.push_back(n);
    }

    if (s == "first") {
        int sum;
        for (int i = 0; i < vec.size(); i++) { // Iterate all input
            for (int j = 0; j < ans.size(); j++) { // Iterate all ans vector
                sum = 0;
                for (int k = 0; k < ans[j].size(); k++) { // Calculate sum of each ans
                    sum += ans[j][k];
                }
                if (sum + vec[i] <= 100) {
                    ans[j].push_back(vec[i]);
                    break;
                }
                if (j == ans.size() - 1) {
                    ans.push_back(vector<int>());
                    ans[j + 1].push_back(vec[i]);
                    break;
                }
            }
        }
    } else if (s == "best") {
        int sum;
        for (int i = 0; i < vec.size(); i++) { // Iterate all input
            int max = -1;
            int MIN = 101;
            for (int j = 0; j < ans.size(); j++) { // Iterate all ans vector
                sum = 0;
                for (int k = 0; k < ans[j].size(); k++) { // Calculate sum of each ans
                    sum += ans[j][k];
                }
                if (sum + vec[i] <= 100) {
                    if (100 - (sum + vec[i]) < MIN) {
                        MIN = 100 - (sum + vec[i]);
                        max = j;
                    }
                }
            }
            if (max == -1) {
                ans.push_back(vector<int>());
                ans[ans.size() - 1].push_back(vec[i]);
            } else {
                ans[max].push_back(vec[i]);
            }
        }
    }


    for (int i = 0; i < ans.size(); i++) {
        sort(ans[i].begin(), ans[i].end());
    }

    sort(ans.begin(), ans.end(), customComparator);


    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
