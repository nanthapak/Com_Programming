// #include<iostream>
// #include<string>
// #include<cmath>
// #include<vector>
// #include<algorithm>
// using namespace std;
// //code to find which lift should each person choose to min the step
// int main(){
//     int l;
//     int p;
//     cin>>l;
//     cin.ignore();
//     int lft[l][3];
//     for(int i=0;i<l;i++){
//         for(int j=0;j<3;j++){
//             cin>>lft[i][j];
//         }
//     }
//     cin>>p;
//     cin.ignore();
//     int per[p][2];
//     for(int i=0;i<p;i++){
//         for(int j=0;j<2;j++){
//             cin>>per[i][j];
//         }
//     }
//     for(int i=0;i<p;i++){//person
//         int res;
//         int numlft;
//         int idx=-1;
//         int ans[l];//list of steps of each lift
//         for(int j=0;j<l;j++){//each lift
//             if(per[i][1]-per[i][0]<0&&lft[j][2]-lft[j][1]<0){//lft down, per down
//                 if(per[i][0]<=lft[j][1]&&per[i][0]>lft[j][2]){//start in the way
//                     if(per[i][1]>=lft[j][2]){//end in the way
//                         ans[j]=0;
//                     }
//                     else {//end not in the way
//                         ans[j]=lft[j][2]-per[i][1];
//                     }
//                 }
//                 else{//start not in the way
//                     if(per[i][0]>lft[j][1]){//per start before lft start
//                         ans[j]=(-1*(lft[j][2]-per[i][0]))+(-1*(per[i][1]-per[i][0]));
//                     }
//                     else {//per start after lft end
//                         ans[j]=(-1*(per[i][0]-lft[j][2]))+(-1*(per[i][1]-per[i][0]));
//                     }
//                 }
//             }
//             else if(per[i][1]-per[i][0]>0&&lft[j][2]-lft[j][1]>0){//lft up,per up
//                 if(per[i][0]>=lft[j][1]&&per[i][0]<lft[j][2]){//start in the way
//                     if(per[i][1]<=lft[j][2]){//end in the way
//                         ans[j]=0;
//                     }
//                     else {//end not in the way
//                         ans[j]=per[i][1]-lft[j][2];
//                     }
//                 }
//                 else{//start not in the way
//                     if(per[i][0]<lft[j][1]){//per start before lft start
//                         ans[j]=lft[j][2]-per[i][0]+per[i][1]-per[i][0];
//                     }
//                     else {//per start after lft end
//                         ans[j]=per[i][0]-lft[j][2]+per[i][1]-per[i][0];
//                     }
//                 }
//             }
//             else 
//             {
//                 ans[j]=abs(lft[j][2]-per[i][0])+abs(per[i][1]-per[i][0]);
//             }
//             if(j!=0){
//                 if(ans[j]<res){
//                     res=ans[j];
//                     idx=lft[j][0];
//                 }
//                 else if(ans[j]==res){
//                     idx=min(lft[j][0],idx);
//                 }
                

//             }
//             else{
//                 res=ans[j];
//                 idx=lft[j][0];
//             }
            
            
//         }
//         cout<<">> "<<idx<<endl;
//     }
// }