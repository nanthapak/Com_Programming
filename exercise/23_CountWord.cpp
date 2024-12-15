#include<iostream>
#include<unordered_map>
#include<cmath>
#include<vector>
#include <string>
using namespace std;

int main(){
    string wrd;
    string s;
    getline(cin,wrd);
    getline(cin,s);
    int count=0;
    vector<string> all;
    string each="";

    s+=" ";
    for(int i=0;i<s.length();i++){
        if(s[i]=='\'' || s[i]=='(' || s[i]==')' || s[i]=='\"' || s[i]==',' || s[i]=='.'){
            s[i]=' ';

        }
        if(s[i]!=' '){
            each+=s[i];
        }
        else{
            all.push_back(each);
            each.clear();
        }
        
    }
    for(auto x:all){
        if(x==wrd){
            count+=1;
        }
    }
    cout<<count;
}