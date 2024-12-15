#include<iostream>
#include<unordered_map>
#include<cmath>
using namespace std;

int main(){
    //map<int,int> {month,days} then loop through the map
    long sday,smonth,syear,eday,emonth,eyear;
    cin>>sday>>smonth>>syear>>eday>>emonth>>eyear;

    syear-=543;
    eyear-=543;
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

    long daysum=0;

    int gapyear=eyear-syear-1;
    daysum+=gapyear*365;

    if(sday<=28&&smonth<=2){
        if(syear%4==0 && syear%100!=0){
        umap[2]=29;
        }
        else if(syear%400 ==0&&syear%100==0){
            umap[2]=29;
        }
        else{
            umap[2]=28;
        }
    }
    daysum+=umap[smonth]-sday+1;
    for(int i=smonth+1;i<=12;i++){
        daysum+=umap[i];
    }

    umap[2]=28;
    if(eday>=1&&emonth>=3){
        if(eyear%4==0 && eyear%100!=0){
        umap[2]=29;
        }
        else if(eyear%400==0 &&eyear%100==0){
            umap[2]=29;
        }
        else{
            umap[2]=28;
        }
    }
    for(int i=1;i<emonth;i++){
        daysum+=umap[i];
    }
    daysum+=eday-1;

    double p=sin((2*M_PI*daysum)/23);
    double e=sin((2*M_PI*daysum)/28);
    double i=sin((2*M_PI*daysum)/33);

    cout<<daysum<<" "<<round(p*100.0)/100.0<<" "<<round(e*100.0)/100.0<<" "<<round(i*100.0)/100.0;
}