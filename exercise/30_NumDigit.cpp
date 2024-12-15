#include<iostream>
#include<unordered_map>
#include<cmath>
#include<vector>
#include<string>
#include<cctype>
#include <algorithm>
using namespace std;

long long power(long long base, long long exponent) {
    if (exponent == 0) {
        return 1;
    }
    if (exponent == 1) {
        return base;
    }
    
    long long temp = power(base, exponent / 2);
    if (exponent % 2 == 0) {
        return temp * temp;
    } else {
        return base * temp * temp;
    }
}

int main(){
    long long M;
    long long N;
    long long sum=0;
    long long x=0;
    long long lenM=0;
    long long lenN=0;
    long long temp;
    cin>>M>>N;
    temp=M;
    while(temp>0){
        lenM+=1;
        temp/=10;
    }
    temp=N;
    while(temp>0){
        lenN+=1;
        temp/=10;
    }
    if(M==0){
        lenM=1;
    }
    // My Logic:
    // first set===len of M*(pow(10,len M)-M)
    // second set===len M+1*(pow(10,len M+1)-pow(10,M))
    // .....
    // until pow(10,M+x)>N ---> len(N-pow(10,M+x-1)+1)
    sum+=(lenM+x)*(power(10,lenM)-M);
    x++;
    while(power(10,lenM+x)<=N){
        sum+=(lenM+x)*(power(10,lenM+x)-power(10,lenM+x-1));
        x++;
    }
    if(power(10,lenM+x-1)!=N){
    sum+=(N-power(10,lenM+x-1)+1)*lenN;
    }
    else{
        sum+=lenN;
    }
    cout<<sum;
}