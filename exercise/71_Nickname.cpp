#include<map>
#include<iostream>
#include<string>
#include<iostream>
#include <sstream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    map<string,string> Map;
    map<string,string> Umap;

    for(int i=0;i<n;i++){
        string line;
        getline(cin, line);
        stringstream ss(line);
        string name, nickname;
        ss >> name >> nickname;
        Map[name] = nickname;
        Umap[nickname] = name;
    }
    int m;
    cin>>m;
    cin.ignore();
    for(int i=0;i<m;i++){
        string str;
        cin>>str;
        cin.ignore();
        if(Map.find(str)!=Map.end()){
            cout<<Map[str]<<endl;
        }
        
        else if(Umap.find(str)!=Umap.end()){
            cout<<Umap[str]<<endl;
        }

        else{
            cout<<"Not found"<<endl;
        }
    }

}