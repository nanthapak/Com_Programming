#include<iostream>
#include<unordered_map>
#include<cmath>
using namespace std;

int main(){
    int d,m,y;
    cin>>d>>m>>y;
    y-=543;
    unordered_map<int,int> umap={
        {1,31},
        {2,28},
        {3,31},
        {4,30},
        {5,31},
        {6,30},
        {7,31},
        {8,31},
        {9,30},
        {10,31},
        {11,30},
        {12,31}, 
    };
    if(d<=28&&m<=2){
        if(y%4==0 && y%100!=0){
            umap[2]=29;
            }
        else if(y%400 ==0&&y%100==0){
            umap[2]=29;
        }
        else{
            umap[2]=28;
        }
    }
    d+=15;
    if(d>umap[m]){
        d-=umap[m];
        m+=1;
    }
    if(m>12){
        y+=1;
        m-=12;
    }
    y+=543;
    cout<<d<<'/'<<m<<'/'<<y;
}