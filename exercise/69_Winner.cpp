#include <set>
#include <iostream>
#include <string>
using namespace std;

int main(){
    set<string> s1,s2;
    string str1,str2;
    while(cin>>str1>>str2){
        s1.insert(str1);
        s2.insert(str2);
    }
    bool nonone=true;
    for(auto x:s1){
        bool pass=true;
        for(auto y:s2){
            if(x==y){
                pass=false;
            }
        }
        if(pass){
            cout<<x<<" ";
            nonone=false;
        }
    }
    if(nonone){
        cout<<"None";
    }
}