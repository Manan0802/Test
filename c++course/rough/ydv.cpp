#include<iostream>
using namespace std;
// int main(){
//     int n,cnt;
//     int a[1000];
//     cout<<"enter no of elemnt\n";
//     cin>>n;
//     cnt=0;
    
    
//     for(int i=0;i<n;i++){
//         cout<<"enter "<<i<<"th element ";
//         cin>>a[i];

//     }
//     for(int i=0;i<n;i++){
//         int x=a[i];
//         int count1=0;

        
//         while(x != 0){
//             //count1 =0;
//             int r=x%10;
            
//             if(r == 1 ) count1++;
//             //if(count1 == 2) cnt++;
//             x=x/10;
//         }
//         if(count1 == 2) cnt++;
//     }
    
    
//     cout<<cnt;
// }
// int main(){
//     int x;
//     cin>>x;
//     int cnt=0;
//     while(x != 0){
//     if(x>=5){
//         x=x-5;
//         cnt++;
//     }
//     else if(x==4){
//         x=x-4;
//          cnt++;
//     }
//     else if(x==3){
//         x=x-3;
//          cnt++;
//     }
//     else if(x=2){
//         x=x-2;
//         cnt++;
//     } 
//     else{
//         x=x-1;
//         cnt++;
//     }

// }
// cout<<cnt;
// }
int main(){
    float n;
    cin>>n;
    float waste;
    waste=0.1*n;
    float remaing=n-waste;
    int regi=remaing*10;
    float unuse=remaing*10-regi;
    float ans=unuse*0.1;
    cout<<regi<<" "<<ans<<" "<<waste;
}