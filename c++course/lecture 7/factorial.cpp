#include<iostream>
using namespace std;
//void fact(int n){//agar return function use higa to uskee liye hum void ki jagahab int aur retuen tab use hoga jab hume agge value use karni hoo
int fact(int n){
    int pro=1;
    if(n==0){
        cout<<"1";
    }
    for(int i=1;i<=n;i++){
        pro=pro*i;
    }
   // cout<<pro<<'\n'; //note agr humae value use karni  hai toh hum cout i jagha return arge 
   return pro;

}
   //NCR
   int ncr(int n,int r){
    int fact_n=fact(n);
    int fact_r=fact(r);
    int fact_nr=fact(n-r);
    int ans=fact_n/(fact_r * fact_nr);
    return ans;
   }


int main(){
    int n;
    int r;
    cin>>n>>r;
    // cout<<n<<r;
    // int ans=fact(n);
    int ans=ncr(n,r);
    cout<<ans;
    return 0 ;
}