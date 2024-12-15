// #include<iostream>
// #include<unordered_map>
// #include<cmath>
// #include<vector>
// #include<string>
// #include<cctype>
// #include <algorithm>
// #include <iomanip>
// using namespace std;

// int main(){
//     int N;
//     cin>>N;
//     cin.ignore();
//     string deck[N];
//     string cs;
//     for(int i=0;i<N;i++){
//         cin>>deck[i];
//         cin.ignore();
//     }
//     getline(cin,cs);
//     for(int i=0;i<cs.length();i++){
//         int New=N/2;
//         string deck1[New];
//         string deck2[New];
//         for(int k=0;k<New;k++){
//         deck1[k]=deck[k];
//         deck2[k]=deck[k+New];
//         }
//         if(cs[i]!=' '){
//             if(cs[i]=='C'){
//                 for(int j=0;j<New;j++){
//                     deck[j]=deck2[j];
//                     deck[j+New]=deck1[j];
//                 }
//             }
//             else if(cs[i]=='S'){
//                 for(int j=0;j<N;j++){
//                     if(j%2==0){
//                         deck[j]=deck1[j/2];
//                     }
//                     else{
//                         deck[j]=deck2[(j-1)/2];
//                     }
//                 }
//             }
//         }
//     }
//     for(int i=0;i<N;i++){
//         cout<<deck[i]<<" ";
//     }
// }