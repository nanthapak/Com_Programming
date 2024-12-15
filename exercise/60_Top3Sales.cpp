#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include<unordered_map>
using namespace std;

int main(){
    string s;
    string list;
    double prc;
    double ini=0;
    vector<string> vec;
    vector<pair<double,string>> shop;
    vector<pair<double,string>> ans;
    while(cin>>s){
        if(s!="END"){
            cin>>prc;
            shop.push_back({-prc,s});
            ans.push_back({ini,s});
        }
        else{
            break;
            
        }
    }
    string Nas;
    getline(cin,Nas);
    getline(cin,list);
    string str;
    istringstream stream(list);
    
    while(stream>>str){
        vec.push_back(str);
    }
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<shop.size();j++){
            if(vec[i]==shop[j].second){
                ans[j].first+=shop[j].first;
            }
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<3;i++){
        if(ans[i].first!=0){
        cout<<ans[i].second<<" "<<-ans[i].first<<endl;
        }
        else if(ans[0].first==0&&ans[1].first==0&&ans[2].first==0){
            cout<<"No Sales";
            break;
        }

    }
    

}