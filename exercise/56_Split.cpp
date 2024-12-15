#include<vector>
#include<iostream>
#include<string>
using namespace std;

vector<string> split(string line, char delimiter){
    string s="";
    vector<string> vec;
    line+=delimiter;
    for(int i=0;i<line.length();i++){
        if(line[i]!=delimiter){
            s+=line[i];
        }
        else{
            if(s!=""){
                vec.push_back(s);
                s="";
            }
        }
    }
    return vec;
}

int main() {
    string line;
    getline(cin, line);
    string delim;
    getline(cin, delim);
    for (string e : split(line, delim[0])) {
    cout << '(' << e << ')';
    }
}
