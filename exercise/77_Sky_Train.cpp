#include <map>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <set>
using namespace std;

int main() {
    string s, tar;
    map<string, vector<string>> con;  
    vector<string> vec;

    while (getline(cin, s)) {
        vec.push_back(s);
    }
    
  
    tar = vec[vec.size() - 1];
    
    
    vec.pop_back();
    
    for (const auto& x : vec) {
        string s1, s2;
        stringstream ss(x);
        ss >> s1 >> s2;
        con[s1].push_back(s2);
    }
    set<string> ans;
    for(auto x:con[tar]){
        ans.insert(x);
        if(con.find(x)!=con.end()){
            for(auto y:con[x]){
                ans.insert(y);
            }
        }
    }
    for(auto z:con){//loop all con
        for(auto w:z.second){//loop all vector
            if(tar==w){//tar=ele in vec insert vec.fst and all element
                ans.insert(z.first);
                for(auto q:z.second){//loop all element
                    ans.insert(q);
                }
                for(auto k:con){
                    for(auto m:k.second){
                        if(z.first==m){
                            ans.insert(k.first);
                        }
                    }
                }
            }
            for(auto aq:con[tar]){
                if(aq==w){
                    ans.insert(z.first);
                }
            }
        }
    }
    ans.insert(tar);
    for(auto x:ans){
        cout<<x<<endl;
    }

}
