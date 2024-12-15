// #include<iostream>
// #include<unordered_map>
// #include<cmath>
// #include<vector>
// #include<string>
// #include<cctype>
// #include<sstream>
// #include<algorithm>
// using namespace std;

// int main(){
//     int N;
//     cin>>N;
//     cin.ignore();
//     int stack[N];
//     int reverso[N];
//     int p=N;
//     int all=N;
//     int set;
//     for(int i=0;i<N;i++){
//         int pan;
//         cin>>pan;
//         stack[i]=pan;
//         reverso[i]=pan;

//     }
//     for(auto y:stack){
//         cout<<y<<" ";
//     }
//     cout<<endl;
    
//     while(p>1){
//         int Max=0;
//         for(int i=0;i<p;i++){
//             if(stack[i]>Max){
//                 Max=stack[i];
//                 set=i;
//             }
//         }
//         if(set==p-1){
//             p--;
//             continue;
//         }
//         else if(set!=0)
//         {
//             for(int i=0;i<=set;i++){
//                 reverso[i]=stack[set-i];
//             }
//             for(int i=0;i<=set;i++){
//                 stack[i]=reverso[i];
//             }
//         }
//         else if(set==0)
//         {
//             for(int i=0;i<p;i++){
//                 reverso[i]=stack[p-i-1];
//             }
//             for(int i=0;i<p;i++){
//                 stack[i]=reverso[i];
//             }
//         }
//         for(int i=0;i<all;i++){
//             cout<<stack[i]<<" ";
//         }
//         cout<<endl;

//     }
// }