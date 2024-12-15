#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    string s;
    vector<int> res(1, 0); // Initialize the result vector with one element set to 0
    
    while(getline(cin, s)) {
        if(s != "END") {
            // Reverse the input string to align digits properly
            reverse(s.begin(), s.end());
            
            // Ensure the result vector has enough space to store the sum
            if(res.size() < s.length()) {
                res.resize(s.length(), 0);
            }
            
            // Add the current number to the result
            for(int i = 0; i < s.length(); i++) {
                int num = s[i] - '0';
                if (i >= res.size()) {
                    res.push_back(0);
                }
                res[i] += num;
                
                // Handle carry over
                int j = i;
                while (res[j] >= 10) {
                    if(j + 1 >= res.size()) {
                        res.push_back(0); // Expand the vector if needed
                    }
                    res[j + 1] += res[j] / 10;
                    res[j] %= 10;
                    j++;
                }
            }
        } else {
            // Output the result in the correct order
            for(auto it = res.rbegin(); it != res.rend(); ++it) {
                cout << *it;
            }
            cout << endl;
            break;
        }
    }
    
    return 0;
}
