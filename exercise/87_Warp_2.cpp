#include <map>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include<cmath> 
using namespace std;

vector<vector<long>> vec;
vector<long> inp;
bool Warping(map<long,vector<long>> warp,long start,long tar){
    if(start==tar){
        vec.push_back(inp);
        inp.pop_back();
        return true;
    }
    bool pass=false;
    if(warp.find(start)!=warp.end()){
        for(auto x:warp[start]){
            start=x;
            inp.push_back(start);
            pass|=Warping(warp,start,tar);
        }
        inp.pop_back();
        return pass;     
    }
    inp.pop_back();
    return false;
}

int main(){
    map<long,vector<long>> warp;
    long a,b,c,start,tar;
    cin>>a>>start>>tar;
    cin.ignore();
    for(int i=0;i<a;i++){
        cin>>b>>c;
        cin.ignore();
        if(find(warp[b].begin(),warp[b].end(),c)==warp[b].end()){
            warp[b].push_back(c);
        }
    }
    if(Warping(warp,start,tar)){
        sort(vec.begin(),vec.end());
        for(auto x:vec){
            cout<<start;
            for(auto y:x){
                cout<<" -> "<<y;
            }
            cout<<endl;
        }
    }
    else{
        cout<<"no";
    }

    return 0;
}