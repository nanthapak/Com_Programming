#include<iostream>
#include<unordered_map>
#include<cmath>
#include<vector>
#include<string>
#include<cctype>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
    double N;
    double sum;
    double x;
    cin>>N;
    cin.ignore();
    vector<double> lst;
    vector<double> temp;
    for(int i=0;i<N;i++){
        double num;
        cin>>num;
        cin.ignore();
        lst.push_back(num);
    }
    for(int j=0;j<N;j++){
        temp=lst;
        if(j==0){
            cout<<setprecision(10)<<lst[0]<<endl;
        }
        else{
            for(int i=j;i>0;i--){
                temp[i-1]=(temp[i]*temp[i-1]+1)/temp[i];
            }
            cout<<setprecision(10)<<temp[0]<<endl;
        }
        
    }
}