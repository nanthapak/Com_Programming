#include<iostream>
#include<unordered_map>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    vector<double> ans;
    double input;
    double sum;
    while(cin>>input&&input!=-1){
        ans.push_back(input);
    }
    for(auto i:ans){
        sum+=i;
    }
    if(ans.empty()){
        cout<<"No Data";
    }
    else{
        sum/=ans.size();
        cout<<round(sum*100)/100;
    }
}