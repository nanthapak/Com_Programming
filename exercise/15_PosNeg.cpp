#include<iostream>
using namespace std;

int main(){
    long num;
    cin>>num;
    string value;
    string oddev;
    if(num>0){
        value="positive";
    }
    else if(num<0){
        value="negative";
    }
    else{
        value="zero";
    }
    if(num%2==0){
        oddev="even";
    }
    else{
        oddev="odd";
    }
    cout<<value<<endl<<oddev;
}