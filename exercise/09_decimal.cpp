#include<iostream>
#include <cmath>
#include<iomanip>
#include<vector>
#include <string>
#include <sstream>
#include<unordered_map>
using namespace std;

long gcd(long a,long b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
    vector<string> all;
    string each="";
    string s;
    getline(cin, s);
    s+=" ";
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            each+=s[i];
        }
        else{
            all.push_back(each);
            each="";
        }
    }
    long set1=stoi(all[0]);
    long set2=stoi(all[1]+all[2]);
    long set3=stoi(all[1]);
    long Sum=all[2].length();
    long Maisum=all[1].length();
    long up=set2-set3;
    string nine="";
    for(int i=0;i<Sum;i++){
        nine+='9';
    }
    string zero="";
    for(int i=0;i<Maisum;i++){
        zero+='0';
    }
    long down=stoi(nine+zero);
    long divide=gcd(up,down);
    up=up/divide;
    down=down/divide;
    up=set1*down+up;
    cout<<up<<" / "<<down;



    

}