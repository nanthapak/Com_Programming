#include<iostream>
#include<unordered_map>
#include<cmath>
#include<vector>
#include<string>
#include<cctype>
#include<sstream>
#include <algorithm>
using namespace std;

int main(){
    unordered_map<string,int> map;
    int N;
    string s;
    int fee;
    string route;
    vector<string> vec;
    cin>>N;
    cin.ignore();
    for(int i=0;i<N;i++){
        cin>>s;
        cin.ignore();
        cin>>fee;
        cin.ignore();
        map[s]=fee;
    }
    getline(cin,route);
    // cin.ignore();
    // cout<<route;
    for(int i=0;i<route.length();i++){
        if (route[i]=='-')
        {
            string str;
            str=route[i+1];
            str+=route[i+2];
            vec.push_back(str);
        }
        
    }
    int sum=0;
    for(int i=0;i<vec.size();i++){
        if(i==0){
            sum+=0;
        }
        else{
            if(vec[i]!=vec[i-1]){
                sum+=map[vec[i]];
            }
        }
    }
    cout<<sum;
}