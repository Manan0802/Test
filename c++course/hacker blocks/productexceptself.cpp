#include<iostream>
using namespace std;
int main(){
    long long a[1000],b[1000];
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long ans =1;
    for(int i=0;i<n;i++){
        ans=ans*a[i];
    }
    
    // long long b[n];
    for(int i=0;i<n;i++){
        
            b[i]=ans/a[i];
        
    }
    for(int i=0;i<n;i++){
        cout<<b[i];
    }
    return 0;



}
