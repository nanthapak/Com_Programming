#include<iostream>
#include<unordered_map>
#include<cmath>
#include<vector>
#include<string>
#include<cctype>
#include<sstream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin>>N;
    cin.ignore();
    vector<int> nums;
    int temp;
    for(int i=0;i<N;i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    if(N!=0){
        int count=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1]){
                count++;
            }
        }
        cout<<count;
    }
    else{
        cout<<0;
    }
}