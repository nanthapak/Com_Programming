#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    if(s.length()!=10){
        cout<<"Not a mobile number";
    }
    else {
        if(s[0]=='0'){
            if(s[1]=='6' ||s[1]=='8' ||s[1]=='9' ){
                cout<<"Mobile number";
            }
            else{
                cout<<"Not a mobile number";
            }
        }
        else{
                cout<<"Not a mobile number";
            }
    }
}
