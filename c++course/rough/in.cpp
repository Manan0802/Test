#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++ ){
        cin>>a[i];

    }
    int x[100];
    int val;
    for(int i=0;i<n;i++){
        val=a[i];
        x[val]=i;
    }
    for(int i=0;i<n;i++){
        cout<<x[i]<<" ";
    }
    return 0;
}