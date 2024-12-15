#include<iostream>
#include<set>
#include<vector>
#include <set>
#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <algorithm>
using namespace std ;

set<int> Union(set<int>& a, set<int>& b) {
    set<int> result ;
    for(auto& i : a){
        result.insert(i) ;
    }
    for(auto& i : b){
        result.insert(i) ;
    }
    return result ;
}

set<int> Intersection(set<int>& a, set<int>& b) {
    set<int> result;
    for (auto& i : a) {
        if (b.find(i) != b.end()) {
            result.insert(i);
        }
    }
    return result;
}

set<int> Difference(set<int>& a, set<int>& b) {
    set<int> result;
    for (auto& i : a) {
        if (b.find(i) == b.end()) {
            result.insert(i);
        }
    }
    return result;
}


void print(set<int>& a) {
    if (a.size() == 0) {
        cout << "empty set";
    }
    else {
        for (auto i : a) {
            cout << i << " ";
        }
    }
}

int main(){
    vector<set<int>> all_set ;
    int n ;
    set<int> temp ;

    string line;
    while (getline(cin, line)) {
    stringstream ss(line);
    while (ss >> n) {      
        temp.insert(n);
    }
    all_set.push_back(temp); 
    temp.clear();            
}

    set<int> U = all_set[0] ;
    set<int> I = all_set[0] ;
    set<int> D = all_set[0] ;

    for(int i = 1 ; i<all_set.size() ; i++){
        U = Union(U , all_set[i]) ;
        I = Intersection(I , all_set[i]) ;
        D = Difference(D , all_set[i]) ;
    }

    cout<<"U: " ;
    print(U) ;
    cout<<endl ;

    cout<<"I: " ;
    print(I) ;
    cout<<endl ;

    cout<<"D: " ;
    print(D) ;
}