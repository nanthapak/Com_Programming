#include<iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main(){
    double xe,ye,re,rp,xm,ym;
    cin>>xe>>ye>>re>>rp>>xm>>ym;
    double c=re-rp;
    double A=xm-xe;
    double B=ym-xe;
    double C=sqrt(pow(A,2)+pow(B,2));
    
    double a=(c/C)*A+xe;
    double b=(c/C)*B+ye;
    cout<<round(a)<<" "<<round(b);
}