#include <map>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    int n;
    string line;
    map<string, vector<string>> songMap;  // Renamed from `map` to `songMap`
    
    cin >> n;
    cin.ignore();  // Ignore newline character after the integer input

    // Reading the singer and song pairs
    for (int i = 0; i < n; i++) {
        getline(cin, line);
        int pos = line.find(",");
        string singer = line.substr(pos + 2);  // Extract singer after ", "
        string song = line.substr(0, pos);     // Extract song before ","
        songMap[song].push_back(singer);
    }

    // Reading the list of songs to find singers
    string lst;
    getline(cin, lst);

    vector<string> songsToFind;
    stringstream ss(lst);
    string temp;

    // Splitting the input songs by commas
    while (getline(ss, temp, ',')) {
        if(temp[0]==' '){temp.erase(0, 1);}  // Trim leading whitespace
        songsToFind.push_back(temp);
    }

    // Processing the list of songs to find singers
    for (const auto& song : songsToFind) {
        cout << song << " ->";
        if (songMap.find(song) != songMap.end()) {
            // Found the song in the map
            for (size_t j = 0; j < songMap[song].size(); j++) {
                if (j != songMap[song].size() - 1) {
                    cout << " " << songMap[song][j] << ",";
                } else {
                    cout << " " << songMap[song][j];
                }
            }
            cout << endl;
        } else {
            // Song not found
            cout << " Not found" << endl;
        }
    }
}
