#include<iostream>
#include <cmath>
#include<iomanip>
#include<vector>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string x;
    cin>>x;
    long Sum=0;

    string ans;
    for(int i=0;i<x.length();i++){
        
        Sum+=(x[i]-'0')*(13-i);

    }
    int n12=(11-(Sum%11))%10;
    cout<<x[0]<<"-"<<x[1]<<x[2]<<x[3]<<x[4]<<"-"<<x[5]<<x[6]<<x[7]<<x[8]<<x[9]<<"-"<<x[10]<<x[11]<<"-"<<n12;

    
}