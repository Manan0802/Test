#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        if(sum<0){
            sum =0;
        }
        // else{
        //     ans=sum;
            
        // }
        ans=max(sum,ans);

    }
    cout<<ans;
    return 0;

}