#include<iostream>
#include<unordered_map>
#include<cmath>
#include<vector>
#include<string>
#include <cctype>
using namespace std;

int main(){
    string str;
    vector<string> alls; 

    while (getline(cin, str)) { 
            if (str.empty()) { 
                break; 
            } 
            alls.push_back(str); 
        } 
    for(auto s:alls)
    {
        bool passlow=false;
        bool passup=false;
        bool passnum=false;
        bool passelse=false; 
        if(s.length()>=8){
            for(int i=0;i<s.length();i++){
            if(islower(s[i])){
                passlow=true;
            }
            else if(isupper(s[i])){
                passup=true;
            }
            else if(isdigit(s[i])){
                passnum=true;
            }
            else if(ispunct(s[i])){
                passelse=true;
            }
        }
        }

        if(s.length()>=12&&passup&&passlow&&passnum&&passelse){
            cout<<">> strong"<<endl;
        }

        else if(s.length()>=8&&passup&&passlow&&passnum){
            cout<<">> weak"<<endl;
        }
        
        else{
            cout<<">> invalid"<<endl;
        }
    }
}