#include<vector>
#include<iostream>
using namespace std;
int main(){
    int n;
    vector<int> vec;
    cin>>n;
    while(n!=1){
        vec.push_back(n);
        if(n%2==0){
            n/=2;
        }
        else{
            n=3*n+1;
        }
    }
    vec.push_back(n);
    if(vec.size()>15){
        for(int i=vec.size()-15;i<vec.size();i++){
            if(i!=vec.size()-1){
                cout<<vec[i]<<"->";
            }
            else{
                cout<<vec[i];
            }
            
        }
    }
    else{
        for(int i=0;i<vec.size();i++){
            if(i!=vec.size()-1){
                cout<<vec[i]<<"->";
            }
            else{
                cout<<vec[i];
            }
        }
    }
}