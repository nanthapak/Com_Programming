#include<iostream>
#include<unordered_map>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    double L=0;
    double U;
    double a;
    cin>>a;
    U=a;
    double x=(L+U)/2;
    while(!(abs(a-pow(10,x))<=pow(10,-10)*max(a,pow(10,x)))){
        if(pow(10,x)>a){
            U=x;
        }
        else if(pow(10,x)<a){
            L=x;
        }
        x=(L+U)/2;
    }
    cout<<x;
}