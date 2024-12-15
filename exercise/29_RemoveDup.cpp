#include<iostream>
#include<unordered_map>
#include<cmath>
#include<vector>
#include<string>
#include<cctype>
#include <algorithm>
using namespace std;

int main(){

    string s;
    vector<int> idx;
    int count=1;
    int start;
    int n;
    cin>>s;
    cin>>n;
    s+=' ';
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            if(count==1){
                start=i-1;
            }
            count++;
        }
        else{
            if(count>=n){
                for(int i=0;i<count;i++){
                    idx.push_back(start+i);
                }
            }
            count=1;
            start=0;
        }
    }
    for (int i = 0; i < s.length(); ++i) {
        if (find(idx.begin(), idx.end(), i) == idx.end()) {
            cout << s[i];
        }
    }
}