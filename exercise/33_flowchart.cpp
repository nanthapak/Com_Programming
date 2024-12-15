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
    double p;
    cin>>p;
    double k=1;
    double t=1;
    t=(t*(365-(k-1)))/365;
    while(1-t<p){
        k++;
        t=(t*(365-(k-1)))/365;
    }
    cout<<k;
}