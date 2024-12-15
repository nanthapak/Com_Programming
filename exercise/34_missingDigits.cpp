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
    string s;
    getline(cin,s);
    vector<int> vec={0,1,2,3,4,5,6,7,8,9};
    for(int i=0;i<s.length();i++){
        auto it=find(vec.begin(),vec.end(),s[i]-'0');
        if(it!=vec.end()){
            vec.erase(it);
        }
    }
    if(!vec.empty()){
        for(int i=0;i<vec.size();i++){
            if(i==0)cout<<vec[i];
            else{cout<<","<<vec[i];}
    }
    }
    else{
        cout<<"None";
    }
}