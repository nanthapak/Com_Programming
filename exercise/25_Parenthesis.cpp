#include<iostream>
#include<unordered_map>
#include<cmath>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    if(s=="no parentheses"){
        cout<<s;
    }
    else{
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                s[i]='[';
            }
            else if(s[i]==')'){
                s[i]=']';
            }
            else if(s[i]=='['){
                s[i]='(';
            }
            else if(s[i]==']'){
                s[i]=')';
            }
        }
        cout<<s;
    }
}