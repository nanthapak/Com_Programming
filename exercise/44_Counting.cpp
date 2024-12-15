#include<iostream>
#include<map>
#include<cmath>
#include<vector>
#include<string>
#include<cctype>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    map<char,int> umap;
    getline(cin,s);
    sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
        if(isalpha(s[i])){
            
                umap[tolower(s[i])]++;
            
        }
    }
    for(auto x:umap){
        cout<<x.first<<" -> "<<x.second<<endl;
    }
    
}