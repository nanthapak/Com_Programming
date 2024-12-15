#include<iostream>
using namespace std;

int main(){
    long w;
    cin>>w;
    if(w<=100){
        cout<<18;
    }
    else if(w>100&&w<=250){
        cout<<22;
    }
    else if(w>250&&w<=500){
        cout<<28;
    }
    else if(w>500&&w<=1000){
        cout<<38;
    }
    else if(w>1000&&w<=2000){
        cout<<58;
    }
    else{
        cout<<"Reject";
    }
}