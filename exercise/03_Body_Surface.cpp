#include<iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main(){
    double W;
    double H;
    cin>>W;
    cin>>H;
    double Mosteller=sqrt(W*H)/60;
    double Haycock = 0.024265*pow(W,0.5378)*pow(H,0.3964);
    double Boyd = 0.0333*pow(W,(0.6157-0.0188*log10(W)))*pow(H,0.3);
    cout<<setprecision(15)<<Mosteller<<endl;
    cout<<setprecision(15)<<Haycock<<endl;
    cout<<setprecision(15)<<Boyd<<endl;
}