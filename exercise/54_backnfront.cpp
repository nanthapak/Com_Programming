#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(){
    list<int> vec={};
    list<int> vec2={};
    int t;
    int n;
    int count=0;
    cin>>n;
    while(cin>>t){
        if(t!=-1)
        {
            cin.ignore();
            if(count==0){
                vec.push_back(t);
                
            }
            else if(count%2==1){
                vec.push_front(t);
            }
            else if(count%2==0){
                vec.push_back(t);
            }
            count++;
            
        }
        else{
            break;
        }
    }
    vec2=vec;
    vec2.pop_back();
    cout<<"[";
    for(auto x:vec2){
        cout<<x<<", ";
    }
    cout<<vec.back();
    cout<<"]";
}