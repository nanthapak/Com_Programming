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
    string val;
    int i=0;
    string type;
    vector<int> x,y,Max,Min;
    while(getline(cin,val)){

        if(val=="-998"){
            type="ZIG";
            break;
        }
        else if(val=="-999"){
            type="ZAG";
            break;
        }

        long num1,num2;
        istringstream iss(val);
        iss >> num1 >> num2;
        x.push_back(num1);
        y.push_back(num2);
        
    }
    if(type=="ZIG"){
        for(int i=0;i<x.size();i++){
            if(i%2==0){
                Max.push_back(y[i]);
                Min.push_back(x[i]);
            }
            else{
                Max.push_back(x[i]);
                Min.push_back(y[i]);
            }
        }
    }
    else if(type=="ZAG"){
        for(int i=0;i<x.size();i++){
            if(i%2==0){
                Max.push_back(x[i]);
                Min.push_back(y[i]);
            }
            else{
                Max.push_back(y[i]);
                Min.push_back(x[i]);
            }
        }
    }
    cout << *min_element(Min.begin(), Min.end())<<" " <<*max_element(Max.begin(), Max.end());
}
