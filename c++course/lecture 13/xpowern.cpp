#include<iostream>
using namespace std;
int power(int x,int n){
    if(n==0){
        return 1;

    }
    return x*power(x,n-1);
}
int main(){
    int x;
    cout<<"enter x \n";
    cin>>x;
    int n;
    cout<<"enter n \n";
    cin>>n;
    cout<<power(x,n)<<" ";
    return 0;
}