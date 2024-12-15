#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    vector<char> vow={'a','e','i','o','u'};
    vector<string> ans;
    s+=' ';
    string c="";
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            c+=s[i];
        }
        else{
            ans.push_back(c);
            c="";
        }
    }
    string first=ans[0];
    string last=ans[ans.size()-1];
    string a1="";
    string v1;
    string a2;
    string v2;
    for(int i=0;i<first.length();i++){
        if(find(vow.begin(),vow.end(),first[i])!=vow.end()){//find it
            v1=first.substr(i,first.length()-i);
            break;
        }
        else{
            a1+=first[i];
        }
    }

    for(int i=0;i<last.length();i++){
        if(find(vow.begin(),vow.end(),last[i])!=vow.end()){//find it
            v2=last.substr(i,last.length()-i);
            break;
        }
        else{
            a2+=last[i];
        }
    }
    ans[0]=a1+v2;
    ans[ans.size()-1]=a2+v1;
    for(auto x:ans){
        cout<<x<<" ";
    }

}