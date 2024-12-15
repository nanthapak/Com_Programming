#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    int time;
    int timeout;
    int firstque;
    int diff;
    int now;
    int timenow;
    vector<int> que;
    vector<int> Time;
    vector<int> sumTime;
    cin>>n;
    cin.ignore();
    string in;
    int put;
    for(int i=0;i<n;i++){
        cin>>in;
        if(in=="reset"){
            cin>>firstque;
            cin.ignore();
            que.push_back(firstque);
        }
        else if(in=="new"){
            cin>>time;
            cin.ignore();
            Time.push_back(time);
            cout<<">> ticket "<<firstque<<endl;
            firstque++;
            que.push_back(firstque);
        }
        else if(in=="next"){
            cout<<">> call "<<que[0]<<endl;
            now=que[0];
            timenow=Time[0];
            que.erase(que.begin()+0);
            Time.erase(Time.begin()+0);
        }
        else if(in=="order"){
            cin>>timeout;
            cin.ignore();
            diff=timeout-timenow;
            sumTime.push_back(diff);
            // Time.erase(Time.begin()+0);
            cout<<">> qtime "<<now<<" "<<diff<<endl;
        }
        else if(in=="avg_qtime"){
            double Sum=0;
            for(int i=0;i<sumTime.size();i++){
                Sum+=sumTime[i];
            }
            Sum/=sumTime.size();
            cout<<">> avg_qtime "<<Sum<<endl;
        }
    }
    
}