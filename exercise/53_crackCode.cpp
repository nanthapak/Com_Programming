#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main(){
    string decoy;
    getline(cin,decoy);
    string s;
    vector<string> Es;
    vector<string> Ds;
    string lst[10]={"UUUU","UUUL","UULU","UULL","ULUU","ULUL","ULLU","ULLL","LUUU","LUUL"};
    while(getline(cin,s)){
        string temp="";
        string dummy="";
        int j=0;
        int k=0;
        if(!s.empty()){ 
            if(s[0]=='E'){
                s.erase(0,2);
                for(int i=0;i<s.length();i++){
                    if(s[i]=='-'){
                        temp+="LULU";
                    }
                    else if(s[i]==','){
                        temp+="LULL";
                    }
                    else{
                        temp+=lst[s[i] - '0'];
                    }
                }
        
                while (k < temp.length()) {  // Ensure the loop processes the entire temp string
                    char current_char = decoy[j % decoy.length()];
                    
                    if (isalpha(current_char)) {
                        if (temp[k] == 'U') {
                            dummy += toupper(current_char);
                        } else if (temp[k] == 'L') {
                            dummy += tolower(current_char);
                        }
                        k++;  // Move to the next character in temp only if an alphabetic character was processed
                    } else {
                        dummy += current_char;  // Non-alphabetic characters are directly copied
                    }
                    
                    j++;  // Move to the next character in decoy
                }

                cout<<dummy<<endl;
            }
            else if(s[0]=='D'){
                s.erase(0,2);
                string dum="";
                for(int i=0;i<s.length();i++){
                    if(isupper(s[i])){
                        dum+='U';
                    }
                    else if(islower(s[i])){
                        dum+='L';
                    }
                }
                for(int j=0;j<=dum.length()-4;j+=4){
                    string str;
                    str=dum.substr(j, 4);
                    if(str=="LULU"){
                        cout<<'-';
                    }
                    else if(str=="LULL"){
                        cout<<',';
                    }
                    else{
                        for(int m=0;m<10;m++){
                            if(str==lst[m]){
                                cout<<m;
                            }
                        }
                    }
                }
            }
            cout<<endl;
            
        }
        // else{
        //     break;
        // }
    }
}
