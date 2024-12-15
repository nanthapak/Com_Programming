#include<iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main(){
    double a;
    double b;
    double c;
    double x1;
    double x2;
    cin>>a;
    cin>>b;
    cin>>c;
    x1=((-1*b)-(sqrt(pow(b,2)-4*a*c)))/(2*a);
    x2=((-1*b)+(sqrt(pow(b,2)-4*a*c)))/(2*a);
    cout<<round(x1*1e3)/1e3<<" ";
    cout<<round(x2*1e3)/1e3;

}