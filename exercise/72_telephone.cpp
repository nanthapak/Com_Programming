#include<map>
#include<iostream>
#include<string>
#include<iostream>
#include <sstream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    map<string,string> map;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        string str="";
        for(int j=0;j<s.length();j++){
            if(isdigit(s[j])){
                map[s.substr(0,j-1)]=s.substr(j);
                map[s.substr(j)]=s.substr(0,j-1);
                break;
            }
            else{
                str+=s[j];
            }
        }
    }
    int m;
    cin>>m;
    cin.ignore();
    for(int i=0;i<m;i++){
        string s1;
        getline(cin,s1);
        if(map.find(s1)!=map.end()){
            cout<<s1<<" --> "<<map[s1]<<endl;
        }
        else{
            cout<<s1<<" --> "<<"Not found"<<endl;
        }
    }
}