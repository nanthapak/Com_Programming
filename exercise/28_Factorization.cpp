#include<iostream>
#include<unordered_map>
#include<cmath>
#include<vector>
#include<string>
#include <cctype>
using namespace std;

int main(){
    long N;
    long D=2;
    long count=0;
    long temp=N;
    bool dvs=false;
    cin>>N;
    while(N>1){
            if(N%D==0){
                if(dvs){
                    cout<<'*';
                }
                cout<<D;
                dvs=true;
                N/=D;
            }
            else{
                D++;
            }
    }
}