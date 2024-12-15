#include<iostream>
#include<unordered_map>
#include<cmath>
#include<string>
using namespace std;

int main(){
    string ans;
    string sent;
    getline(cin,ans);
    getline(cin,sent);
    int count=0;
    if(ans.length()!=sent.length()){
        cout<<"Incomplete answer";
    }
    else{
        for(int i=0;i<ans.length();i++){
            if(ans[i]==sent[i]){
                count++;
            }
        }
        cout<<count;
    }

}