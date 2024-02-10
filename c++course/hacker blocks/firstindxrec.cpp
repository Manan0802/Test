#include<iostream>
using namespace std;
int first(int a[],int n,int i,int m){
    //base case
    if(i==n){
        return -1;
    }
    //recurence rln
    if(a[i]== m){
        return i;
    }
    return(a,n,i+1,m);

}
int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    cout<<first(a,n,0,m);
    return 0;

}