#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;

int main() {
    string s;
    int n;
    map<string, int> umap;
    map<string, pair<int, double>> mean;

    while (cin >> s) {
        if (s == "END") break;  
        cin >> n;
        if (!cin) break; 
        umap[s] = n;
    }


    long total = 0;
    for (const auto& x : umap) {
        total += x.second;
    }
    double sum = total / 100.0;

    double avg, R;
    int sumAVG = 0;

    for (const auto& x : umap) {
        avg = floor(x.second / sum);
        sumAVG += avg;
        R = (x.second / sum) - avg;
        mean[x.first] = {static_cast<int>(avg), R};
    }

    vector<pair<string, pair<int, double>>> sorted_mean(mean.begin(), mean.end());
    sort(sorted_mean.begin(), sorted_mean.end(), [](const auto& a, const auto& b) {
        return a.second.second > b.second.second;  
    });

 
    int left = 100 - sumAVG;
    for (int i = 0; i < left; i++) {
        sorted_mean[i].second.first += 1;  
    }

    vector<pair<string, pair<int, double>>> final_output;
    for (const auto& x : sorted_mean) {
        if (x.second.first > 0) {
            final_output.push_back(x);
        }
    }

    sort(final_output.begin(), final_output.end(), [&](const auto& a, const auto& b) {
        if (a.second.first != b.second.first) {
            return a.second.first > b.second.first;  
        } else {
            return umap[a.first] > umap[b.first];  
        }
    });

    for (const auto& x : final_output) {
        cout << x.first << " " << x.second.first << " " << umap[x.first] << endl;
    }

    return 0;
}
