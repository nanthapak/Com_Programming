#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,long> umap;
    unordered_map<string,long> map;
    vector<long> Sum;
    umap["soon"]=0;
    umap["neung"]=1;
    umap["song"]=2;
    umap["sam"]=3;
    umap["si"]=4;
    umap["ha"]=5;
    umap["hok"]=6;
    umap["chet"]=7;
    umap["paet"]=8;
    umap["kao"]=9;
    umap["et"]=1;
    umap["yi"]=2;
    map["sip"]=10;
    map["roi"]=100;
    map["phan"]=1000;
    map["muen"]=10000;
    map["saen"]=100000;
    map["lan"]=1000000;
    string s;
    while(getline(cin,s)){
        vector<string> vec;
        vector<long> Sum;
        long sum=1;
        long ans=0;
        bool check=false;
        if(s!="q"){
            istringstream stream(s);
            string str;
            while(stream>>str){
                vec.push_back(str);
            }
            for(int i=0;i<vec.size();i++){
                if(map.find(vec[i])==map.end()){//find first digit
                    if(i!=vec.size()-1){
                        sum=umap[vec[i]];
                        check=true;
                    }
                    else{//last digit
                        sum=umap[vec[i]];
                        Sum.push_back(sum);
                    }
                    
                }
                else{// find multiple number
                    if(check){
                        sum*=map[vec[i]];
                        Sum.push_back(sum);
                        check=false;
                    }
                    else{
                        sum=map[vec[i]];
                        Sum.push_back(sum);
                        check=false;
                    }
                    
                }
                
            }
        }
        else{
            
            break;
        }
        for(int i=0;i<Sum.size();i++){
                ans+=Sum[i];
            }
        cout<<ans<<endl;
    }
}