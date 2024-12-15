#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
    string s;
    vector<string> vec;
    getline(cin,s);
    s+="$";
    for(int i=0;i<s.length();i++){
        
        vec.push_back(s);
        char fst=s[0];
        for(int j=0;j<s.length()-1;j++){
            s[j]=s[j+1];
        }
        s[s.length()-1]=fst;
        
        
    }
    sort(vec.begin(),vec.end());
    string ans="";
    for(int i=0;i<vec.size();i++){
        ans+=vec[i][s.length()-1]; 
    }
    cout<<ans;
}