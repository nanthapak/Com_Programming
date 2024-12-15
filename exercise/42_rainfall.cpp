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
//     int sum=0;
//     cin>>n;
//     int lst[n];
//     cin.ignore();
//     for(int i=0;i<n;i++){
//         cin>>lst[i];
//     }
//     for(int i=1;i<n-1;i++){//not count first and last tiles
//         int left=0;
//         int right=n-1;
//         for(int j=0;j<=i;j++){
//             if(lst[j]>lst[left]){
//                 left=j;
//             }
//         }
//         for(int k=n-1;k>=i;k--){
//             if(lst[k]>lst[right]){
//                 right=k;
//             }
//         }
//         if(right!=i&&left!=i){
//             sum+=min(lst[left],lst[right])-lst[i];
//         }
//     }
//     cout<<sum;
// }