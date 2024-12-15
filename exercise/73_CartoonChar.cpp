#include<map>
#include<iostream>
#include<string>
#include<iostream>
#include <sstream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    string s,s1,s2;
    vector<string> vec;
    map<string,vector<string>> map;
    while(getline(cin,s)){
        stringstream ss(s);
        ss>>s1>>s2;
        map[s2].push_back(s1);
        if(find(vec.begin(),vec.end(),s2)==vec.end()){
            vec.push_back(s2);
        }
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<":";
        for(auto x: map[vec[i]]){
            cout<<" "<<x;
        }
        cout<<endl;
    }
}