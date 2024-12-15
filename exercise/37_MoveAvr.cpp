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
    int deck1[4]={1,2,3,4};
    int deck2[4]={5,6,7,8};
    int deck3[8];
    deck3[8]=deck1[4]+deck2[4];
    for(int i=0;i<8;i++){
        cout<<deck3[i];
    }






}
//     int r,c;
//     cin>>r>>c;
//     cin.ignore();
//     double tab[r][c];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cin>>tab[i][j];
//         }
//     }


//     double ans[r][c];
//     for(int i=1;i<r-1;i++){
//         for(int j=1;j<c-1;j++){
//             ans[i][j]=(tab[i][j]+tab[i-1][j]+tab[i][j-1]+tab[i+1][j]+tab[i][j+1]+tab[i+1][j+1]+tab[i-1][j-1]+tab[i-1][j+1]+tab[i+1][j-1])/9;
//             if(j==c-2){
//                 cout<<round(ans[i][j]*100)/100.0<<endl;
//             }
//             else{
//                 cout<<round(ans[i][j]*100)/100.0<<" ";
//             }
//         }
//     }
// }