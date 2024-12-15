#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int getGradeIndex(const string &grade) {
    vector<string> gradeOrder = {"A", "B+", "B", "C+", "C", "D+", "D", "F"};
    auto it = find(gradeOrder.begin(), gradeOrder.end(), grade);
    return it != gradeOrder.end() ? distance(gradeOrder.begin(), it) : gradeOrder.size();
}

int main() {
    int n;
    string a, b;
    vector<pair<pair<string, string>, int>> vec; 
    vector<string> ud;


    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        vec.push_back({{a, b}, i}); 
    }

    string c;
    while (cin >> c) {
        ud.push_back(c);
    }


    for (int i = 0; i < ud.size(); ++i) { 
        string str = ud[i];
        char change = str[str.length() - 1];
        str.erase(str.end() - 1); 

        for (int j = 0; j < vec.size(); j++) { 
            if (vec[j].first.first == str) {
                string &G = vec[j].first.second; 
                vector<string> gradeOrder = {"A", "B+", "B", "C+", "C", "D+", "D", "F"};
                for (int k = 0; k < gradeOrder.size(); k++) { 
                    if (gradeOrder[k] == G) {
                        if (change == '-' && k + 1 < gradeOrder.size()) { 
                            G = gradeOrder[k + 1]; 
                        }
                        else if (change == '+' && k - 1 >= 0) { 
                            G = gradeOrder[k - 1]; 
                        }
                        break; 
                    }
                }
            }
        }
    }


    sort(vec.begin(), vec.end(), [](const pair<pair<string, string>, int> &a, const pair<pair<string, string>, int> &b) {
        int gradeIndexA = getGradeIndex(a.first.second);
        int gradeIndexB = getGradeIndex(b.first.second);
        
        if (gradeIndexA != gradeIndexB) {
            return gradeIndexA < gradeIndexB; 
        } else {
            return a.second < b.second; 
        }
    });


    for (auto x : vec) {
        cout << x.first.first << " " << x.first.second << endl;
    }

    return 0;
}
