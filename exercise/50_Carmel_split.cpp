#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    string c="";
    vector<string> vec;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(i==0){//first char
            cout<<s[i];
        }
        else if(isupper(s[i])){//upper char
            if(!isdigit(s[i-1])){
                cout<<", ";
            }
            if(isupper(s[i+1]!=0)&&i<s.length()-1){
                cout<<s[i]<<", ";
            }
            else{
                cout<<s[i];
            }
        }
        else if(isdigit(s[i])){//int
            if(!isdigit(s[i-1])){
                cout<<", ";
            }
            if(isdigit(s[i+1])){
                cout<<s[i];
            }
            else if(isalpha(s[i+1])){
                cout<<s[i]<<", ";
            }
            else if(i<s.length()-1){
                cout<<s[i]<<", ";
            }
            else{
                cout<<s[i];
            }
        }
        else{//is small case and dont behind num
            cout<<s[i];
        }
    }
}