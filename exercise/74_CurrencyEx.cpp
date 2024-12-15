#include<map>
#include<iostream>
#include<string>
#include<iostream>
#include <sstream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    double m;
    map<string,double> ex;
    string s,str;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,s);
        stringstream ss(s);
        ss>>str>>m;
        ex[str]=m;
    }
    ex["THB"]=1;
    string lst;
    vector<string> vec;
    string c;
    getline(cin,lst);
    stringstream stream(lst);
    while(stream>>c){
        vec.push_back(c);
    }
    int start=stoi(vec[0]);
    for(int i=1;i<vec.size()-1;i++){
        cout<<start<<" "<<vec[i]<<" -> ";
        start=start*ex[vec[i]]/ex[vec[i+1]];
    }
    cout<<start<<" "<<vec[vec.size()-1];

}