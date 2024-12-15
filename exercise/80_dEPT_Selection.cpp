#include <map>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm> 
using namespace std;

int main(){
    int n,a;
    string s1;
    map<string,int> avai;
    map<string,pair<double,vector<string>>> M;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        cin>>s1>>a;
        cin.ignore();
        avai[s1]=a;
    }
    int m;
    double point;
    string line,s2,s3,s4,s5,s6;
    vector<string> vec;
    cin>>m;
    cin.ignore();
    for(int i=0;i<m;i++){
        cin>>s2>>point>>s3>>s4>>s5>>s6;
        M[s2]={point,{s3,s4,s5,s6}};
        cin.ignore();
    }
    int k=m;
    vector<pair<string,string>> ans;
    while(k>0){
        string Max;
        for(auto y:M){
            Max=y.first;
        }
        for(auto x:M){
            if(M[Max].first<x.second.first){
                Max=x.first;
            }
        }
        for(int i=0;i<4;i++){
            if(avai[M[Max].second[i]]!=0){
                ans.push_back({Max,M[Max].second[i]});
                avai[M[Max].second[i]]--;
                k--;
                M.erase(Max);
                break;
            }
        }   
    }
    sort(ans.begin(),ans.end());
    for(auto x:ans){
        cout<<x.first<<" "<<x.second<<endl;
    }

}