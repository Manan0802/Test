#include<iostream>
using namespace std;
int main(){
    int a[]={5, 4 ,-10, 6 ,8, -18, 5, 4 ,-3 ,9 ,-5};
    
    int n=sizeof(a)/sizeof(int);
    int b[n];
    int sum=0;
    int ans=0;
    int ans1=0;
    int total_sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        total_sum=total_sum+a[i];
        if(sum<0){
            sum=0;
        }
        ans=max(ans,sum);
    }
    for (int i=0;i<n;++i){
        b[i]=-1*a[i];
    }
    sum =0;
    for(int i=0;i<n;i++){
        sum=sum+b[i];
    
    if(sum<0){
        sum=0;
        
    }
    ans1=max(ans1,sum);
    }
    ans1=(ans1)*-1;




}