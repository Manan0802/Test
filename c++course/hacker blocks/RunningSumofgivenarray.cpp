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
    int b[n];
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        b[i]=sum;
    }
    for(int k=0;k<n;k++){
        cout<<b[k]<<" ";
    }
    return 0;
}
