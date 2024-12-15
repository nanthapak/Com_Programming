#include<iostream>
#include<cmath>
#include<string>
using namespace std;



int main(){
    long long num;
    cin>>num;
    int len=0;
    double temp=num;
    while(num>0){
        num/=10;
        len++;
    }
    int r=len-len%3;
    if(len<=12){
        if(len==1||len==2||len==3){
            cout<<temp;
        }
        else if(len%3==2){
            temp=temp/pow(10,r);
            for (int i=r;i>0;i--){
                temp=round(temp*pow(10,i-1))/pow(10,i-1);
            }
        }
        else if(len%3==1){
            temp=temp/pow(10,r);
            for (int i=r;i>1;i--){
                temp=round(temp*pow(10,i-1))/pow(10,i-1);
            }
        }
        else if(len%3==0){
            temp=temp/pow(10,len-3);
            for (int i=r;i>0;i--){
                temp=round(temp*pow(10,i-1))/pow(10,i-1);
            }
        }
    }
    else{
        temp=temp/pow(10,9);
        for (int i=9;i>0;i--){
                temp=round(temp*pow(10,i-1))/pow(10,i-1);
            }
    }
    if(len>3&&len<=6){
        cout<<temp<<"K";
    }
    else if(len>6&&len<=9){
        cout<<temp<<"M";
    }
    else if(len>9){
        cout<<temp<<"B";
    }
}