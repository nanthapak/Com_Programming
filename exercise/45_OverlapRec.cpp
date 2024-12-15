#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    int** rectangles = new int*[n];
    for (int i = 0; i < n; i++) {
        rectangles[i] = new int[4];
        for (int j = 0; j < 4; j++) {
            cin >> rectangles[i][j];
        }
    }

    int maxOverlap = 0;
    set<pair<int, int>> maxOverlapPairs; // To store pairs with maximum overlap

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int overlapWidth = min(rectangles[i][2], rectangles[j][2]) - max(rectangles[i][0], rectangles[j][0]);
            int overlapHeight = min(rectangles[i][3], rectangles[j][3]) - max(rectangles[i][1], rectangles[j][1]);

            if (overlapWidth > 0 && overlapHeight > 0) {
                int overlap = overlapWidth * overlapHeight;
                if (overlap > maxOverlap) {
                    maxOverlap = overlap;
                    maxOverlapPairs.clear(); // Clear previous pairs
                    maxOverlapPairs.insert({min(i, j), max(i, j)});
                } else if (overlap == maxOverlap) {
                    maxOverlapPairs.insert({min(i, j), max(i, j)});
                }
            }
        }
    }

    if (maxOverlapPairs.empty()) {
        cout << "No overlaps" << endl;
    } else {
        cout << "Max overlapping area = " << maxOverlap << endl;
        for (const auto& pair : maxOverlapPairs) {
            cout << "rectangles " << pair.first  << " and " << pair.second  << endl;
        }
    }

    // Deallocate memory
    for (int i = 0; i < n; i++) {
        delete[] rectangles[i];
    }
    delete[] rectangles;

    return 0;
}