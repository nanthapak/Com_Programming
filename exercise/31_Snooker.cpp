#include<iostream>
#include<unordered_map>
#include<cmath>
#include<vector>
#include<string>
#include<cctype>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0 ; i < n ; i++){
        string str;
        char ball[6] = {'Y','G','N','B','P','K'};
        int points = 0 ;
        bool check = true;
        getline(cin,str);
        vector <char> v = {}, v2 = {};
        for(int j = 0 ; j < str.size() ; j++){
            if(str[j]!= ' ') v.push_back(str[j]);
        }
        if(v[0]!='R' || v.empty()){
            cout << "WRONG_INPUT" << endl;
            continue;
        }
        else{
            for(int j = 0 ; j < v.size() ; j++){
                if(v[j]=='R' && j%2!=0){
                    cout << "WRONG_INPUT" << endl;
                    check = false;
                    break;
                }
                else if(v[j]=='R' && j%2==0){
                    if(v[j+1]=='R'){
                        cout << "WRONG_INPUT" << endl;
                        check = false;
                        break;
                    }
                    j++;
                }
                else{
                    int k = j;
                    for(k = j ; k < v.size() ; k++){
                        if(v[k]!=ball[k-j] || v.size()-j-1 > 5){
                            cout << "WRONG_INPUT" << endl;
                            check = false;
                            break;
                        }
                    }
                    break;
                }
            }
        }
        if(check){
            for(int j = 0 ; j < v.size() ; j++){
                if(v[j]=='R') points++;
                for(int k = 0 ; k < 6 ; k++){
                    if(v[j]==ball[k]) points+=k+2;
                }
            }
            cout << points << endl;
        }
    }
}