#include <map>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include<cmath> 
using namespace std;
bool Warping(map<long,vector<long>> warp,long start,long tar){
    if(start==tar){
        return true;
    }
    bool pass=false;
    if(warp.find(start)!=warp.end()){
        for(auto x:warp[start]){
            start=x;
            pass|=Warping(warp,start,tar);
        }
        return pass;     
    }
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
        warp[b].push_back(c);
    }
    if(Warping(warp,start,tar)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

    return 0;
}