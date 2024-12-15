#include<iostream>
using namespace std;

int main(){
    string s1,s2;
    double g1,g2;
    char com1,cal1,cals1,com2,cal2,cals2;
    cin>>s1>>g1>>com1>>cal1>>cals1;
    cin>>s2>>g2>>com2>>cal2>>cals2;
    bool pass1=true;
    bool pass2=true;
    if(com1!='A' || cal1=='D'|| cal1=='F'|| cals1=='D'|| cals1=='F'){
        pass1=false;
    }
    if(com2!='A'|| cal2=='D'|| cal2=='F'|| cals2=='D'|| cals2=='F'){
        pass2=false;
    }
    if(pass1&&pass2){
        if(g1>g2){
            pass2=false;
        }
        else if(g2>g1){
            pass1=false;
        }
        else if(pass1&&pass2){
            if(cal1>cal2){
            pass1=false;
        }
            else if(cal2>cal1){
            pass2=false;
        }
            else if(pass1&&pass2){
                if(cals1>cals2){
                pass1=false;
        }
                else if(cals2>cals1){
                pass2=false;
        }
            }
        }
    }
    if(pass1&&pass2){
        cout<<"Both";
    }
    else if(pass1){
        cout<<s1;
    }
    else if(pass2){
        cout<<s2;
    }
    else{
        cout<<"None";
    }

    


}