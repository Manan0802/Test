#include<iostream>
using namespace std;
// int nstair(int n){
//     if(n==0){
//         return 1;

//     }
//     if(n<0){
//         return 0;

//     }
//     return nstair(n-1)+nstair(n-2)+nstair(n-3);


// }
//if k ie max  jump is given
int nstair(int n,int k){
    if(n==0){
         return 1;

     }
     if(n<0){
        return 0;
     }
     int ans=0;
     for(int i=1;i<=k;i++){
        ans=ans+nstair(n-i,k);
     }
     return ans;

}



int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    cout<<nstair(n,k)<<endl;
    return 0;


}