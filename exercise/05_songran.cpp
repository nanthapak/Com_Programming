#include<iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main(){
    double AD;
    double y;
    cin>>AD;
    y=int(AD-543)%100;
    y=int(y+floor(y/4)+11)%7;

    cout<<y;

}