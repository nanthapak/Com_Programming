#include <set>
#include <iostream>
#include <string>
using namespace std;

int main(){
    set<int> s1;
    int n,first,second;
    int ans=-1;
    while(cin>>n){
        first=s1.size();
        s1.insert(n);
        second=s1.size();
        if(first==second){
            ans=first+1;
            cout<<ans;
            break;
        }
    }
    if(ans==-1){
        cout<<ans;
    }
}