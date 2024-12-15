#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<char> alpha;
    for(char ch = 'A'; ch <= 'Z'; ch++) {
        alpha.push_back(ch);
    }
    string s;
    long long c;
    getline(cin,s);
    cin>>c;
    cin.ignore();
    int lnum=(s[6]-'0')+((s[5]-'0')*10)+((s[4]-'0')*100);
    long long temp=c;
    int carry=(c+lnum)/1000;
    int left=(c+lnum)%1000;
    while(carry>0){
            if(s[2]=='Z'){
                s[2]='A';
                if(s[1]=='Z'){
                    s[1]='A';
                    s[0]++;
                }
                else{
                    s[1]++;
                }
            }
            else{
                s[2]++;
            }
            carry--;
    }
    cout<<s[0]<<s[1]<<s[2]<<s[3];

    if(left>=0&&left<10){
        cout<<"00"<<left;
    }
    else if(left>=10&&left<100){
        cout<<"0"<<left;
    }
    else{
        cout<<left;
    }
}