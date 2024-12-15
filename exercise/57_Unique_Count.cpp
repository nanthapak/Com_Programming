#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    string line;
    vector<int> vec;

    // Read the entire line of input
    getline(cin, line);

    // Create a stringstream from the line
    istringstream stream(line);
    int n;

    // Extract integers from the stream and store them in the vector
    while (stream >> n) {
        if (find(vec.begin(), vec.end(), n) == vec.end()) {
            vec.push_back(n);
        }
    }

    // Sort the vector
    sort(vec.begin(), vec.end());

    // Print the size of the vector
    cout << vec.size() << endl;

    // Print the first 10 elements, or all if there are fewer than 10
    if (vec.size() > 10) {
        for (int i = 0; i < 10; i++) {
            cout << vec[i] << " ";
        }
    } else {
        for (auto x : vec) {
            cout << x << " ";
        }
    }

    return 0;
}
