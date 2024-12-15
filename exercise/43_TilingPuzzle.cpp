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
//     int n;
//     cin>>n;
//     cin.ignore();
//     int N=n*n;
//     int lst[N];
//     int count=0;
//     int idxA=-1;
//     int Now=0;
//     for(int i=0;i<N;i++){
//         int a;
//         cin>>a;
//         cin.ignore();
//         if(a!=0){
//             lst[Now++]=a;
//         }
//         else{
//             idxA=i;
//         }
//     }
//     for(int i=0;i<Now-1;i++){
//         for(int j=i+1;j<Now;j++){
//             if(lst[j]>lst[i]){
//                 count++;
//             }
//         }
//     }
//     int line=(idxA/n)+1;
//     if (n % 2 == 0) {
//         if ((count % 2 == 0 && line % 2 == 1) || (count % 2 == 1 && line % 2 == 0)) {
//             cout << "YES";
//         } else {
//             cout << "NO";
//         }
//     } else {
//         if (count % 2 == 0) {
//             cout << "YES";
//         } else {
//             cout << "NO";
//         }
//     }

// }

