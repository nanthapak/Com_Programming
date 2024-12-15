#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    string s;

    while(getline(cin,s)){
        vector<string> ans;
        vector<int> nch;
        
        if(!s.empty()){
            for(int i=0;i<s.length()-1;i++){
                if(isalpha(s[i])==0&&s[i]!=' '&&s[i]==s[s.length()-1]){
                    nch.push_back(i);
                }

                }
                for(int i=0;i<nch.size();i+=2){
                    int len=nch[i+1]-nch[i]-1;
                    string r=s.substr(nch[i]+1,len);
                    ans.push_back(r);

                }
                for(auto x:ans){
                    cout<<x;
                }
                    }
        else{
            break;
        }
        cout<<endl;
    }
    
}