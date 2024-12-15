#include <map>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include<cmath> 
using namespace std;

long powermod(long a,long k,long m){
    if(k==0){
        return 1;
    }
    else if(k%2==0){
        k/=2;
        return static_cast<long>(pow(powermod(a,k,m),2))%m;
    }
    else {
        k/=2;
        return static_cast<long>(a*(pow(powermod(a,k,m),2)))%m;
    }
}

int main(){
    long a,k,m;
    cin>>a>>k>>m;
    cin.ignore();
    cout<<powermod(a,k,m);
}