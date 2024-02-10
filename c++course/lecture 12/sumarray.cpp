#include<iostream>
using namespace std;

int sumarray(int *a,int n){
    //base rln 
    if(n == 0){
        return a[0];
    }
    // recursive case
    return a[n] + sumarray(a,n-1);
}
int main(){
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(int);
    cout<<sumarray(a,n-1)<<endl;
    return 0;
}