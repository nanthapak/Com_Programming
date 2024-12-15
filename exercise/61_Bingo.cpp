#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include<algorithm>
using namespace std;

int main() {
    int lst[5][5];
    bool ans[5][5] = {false};
    vector<char> Bingo;
    string notuse;
    int num;
    char ch;
    char str;
    map<char, int> Map;
    Map['B'] = 0;
    Map['I'] = 1;
    Map['N'] = 2;
    Map['G'] = 3;
    Map['O'] = 4;


    map<int, char> uMap;
    uMap[0] = 'B';
    uMap[1] = 'I';
    uMap[2] = 'N';
    uMap[3] = 'G';
    uMap[4] = 'O';

    getline(cin, notuse);


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> ch;
            if (ch == '*') {
                lst[i][j] = 0;
                ans[i][j] = true;  
            } else {
                cin.putback(ch);
                cin >> num;
                lst[i][j] = num;
            }
        }
    }

    string m;
    int Mn;
    char now;
    int turnCount = 0;
    bool bingo = false;

    while (cin >> m && !bingo) {
        turnCount++;
        now = m[0];
        m.erase(m.begin());
        Mn = stoi(m);

        int colIndex = Map[now];

   
        for (int i = 0; i < 5; i++) {
            if (lst[i][colIndex] == Mn) {
                ans[i][colIndex] = true;
            }
        }


        vector<vector<string>> bingos;

        for (int i = 0; i < 5; i++) {
            if (ans[i][0] && ans[i][1] && ans[i][2] && ans[i][3] && ans[i][4]) {
                vector<string> bingoRow;
                for (int j = 0; j < 5; j++) {
                    if (!(i == 2 && j == 2)) {  
                        bingoRow.push_back(uMap[j] + to_string(lst[i][j]));
                    }
                }
                bingos.push_back(bingoRow);
            }
        }


        for (int i = 0; i < 5; i++) {
            if (ans[0][i] && ans[1][i] && ans[2][i] && ans[3][i] && ans[4][i]) {
                vector<string> bingoCol;
                for (int j = 0; j < 5; j++) {
                    if (!(j == 2 && i == 2)) {  
                        bingoCol.push_back(uMap[i] + to_string(lst[j][i]));
                    }
                }
                bingos.push_back(bingoCol);
            }
        }

        if (ans[0][0] && ans[1][1] && ans[2][2] && ans[3][3] && ans[4][4]) {
            vector<string> bingoDiag;
            for (int j = 0; j < 5; j++) {
                if (j != 2) {  
                    bingoDiag.push_back(uMap[j] + to_string(lst[j][j]));
                }
            }
            bingos.push_back(bingoDiag);
        }

        if (ans[0][4] && ans[1][3] && ans[2][2] && ans[3][1] && ans[4][0]) {
            vector<string> bingoDiag;
            for (int j = 0; j < 5; j++) {
                if (j != 2) {  
                    bingoDiag.push_back(uMap[4 - j] + to_string(lst[j][4 - j]));
                }
            }
            reverse(bingoDiag.begin(),bingoDiag.end());
            bingos.push_back(bingoDiag);
        }


        if (!bingos.empty()) {
            cout << turnCount << endl;
            for (const auto& bingoLine : bingos) {
                for (size_t i = 0; i < bingoLine.size(); i++) {
                    cout << bingoLine[i];
                    if (i < bingoLine.size() - 1) cout << ", ";
                }
                cout << endl;
            }
            bingo = true;  
        }
    }


}
