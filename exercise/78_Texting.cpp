#include <map>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>  // Include algorithm for find()
using namespace std;

int main() {
    // Create a mapping from digits to characters for T9-style text input
    map<char, vector<char>> keypad = {
        {'2', {'a', 'b', 'c'}},
        {'3', {'d', 'e', 'f'}},
        {'4', {'g', 'h', 'i'}},
        {'5', {'j', 'k', 'l'}},
        {'6', {'m', 'n', 'o'}},
        {'7', {'p', 'q', 'r', 's'}},
        {'8', {'t', 'u', 'v'}},
        {'9', {'w', 'x', 'y', 'z'}},
        {'0', {' '}}
    };

    vector<pair<string, vector<string>>> vec; // Store input lines
    string s, str;

    // Read input lines
    while (getline(cin, s)) {
        vector<string> words;
        stringstream ss(s);
        while (ss >> str) {
            words.push_back(str);
        }
        string tar = words[0];  // Command type
        words.erase(words.begin());
        vec.push_back({tar, words});
    }

    // Process each line
    for (auto &x : vec) {
        if (x.first == "T2K") {
            // Text to Key conversion
            cout << ">> ";
            for (size_t i = 0; i < x.second.size(); ++i) {
                const string &word = x.second[i];
                for (const auto &ch : word) {
                    if (ch == ' ') {
                        cout << "0 ";  // Convert spaces to 0
                    } else {
                        // Find the key and number of presses for each character
                        for (const auto &entry : keypad) {
                            auto it = find(entry.second.begin(), entry.second.end(), tolower(ch));  // Convert character to lowercase
                            if (it != entry.second.end()) {
                                int count = distance(entry.second.begin(), it) + 1;
                                cout << string(count, entry.first) << " ";  // Print the key multiple times
                                break;
                            }
                        }
                    }
                }
                // Only add "0 " between words, not after the last word
                if (i < x.second.size() - 1) {
                    cout << "0 ";
                }
            }
            cout << endl;
        } else if (x.first == "K2T") {
            // Key to Text conversion
            cout << ">> ";
            for (const auto &keyGroup : x.second) {
                char key = keyGroup[0];
                int presses = keyGroup.length();
                cout << keypad[key][presses - 1];
            }
            cout << endl;
        }
    }

    return 0;
}
