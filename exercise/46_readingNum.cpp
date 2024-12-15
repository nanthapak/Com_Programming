#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    long long n;
    long long dg;
    int count=0;
    cin>>n;
    long long temp=n;
    string lst[20]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine","ten"
    , "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string lsten[10]={"none","none","twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    vector<string> vec;
    string lstmil[5]={ "zero","thousand", "million", "billion", "trillion"};
    if(n==0){//one digit
        cout<<"zero";
    }

    while(temp>0){


        dg=temp%1000;

        if(count>0&&dg!=0){
            vec.push_back(lstmil[count]);
        }

        if((dg/10)%10==1){
            vec.push_back(lst[dg%100]);
        }
        else if((dg/10)%10==0){
            if(dg%10>0){
                vec.push_back(lst[dg%10]);
            }
        }
        else{
            if(dg%10!=0)
            {vec.push_back(lst[dg%10]);}
            vec.push_back(lsten[(dg/10)%10]);
            
        }
        if((dg/100)%10!=0){
            vec.push_back("hundred");
            vec.push_back(lst[(dg/100)%10]);
        }
            
        temp/=1000;
        count++;
    }
    for(int i =vec.size()-1;i>=0;i--){
        cout<<vec[i]<<" ";
    }
}