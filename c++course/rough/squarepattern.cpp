#include<iostream>
using namespace  std;
int main(){
    int n,no;
    cin>>n;
    for(int i=1;i<=n;i++){
        no=i;
        
        for( int k=1;k<=i;k++){
            cout<<i;
        }
        for(int j=i;j<n;j++){
            cout<<++no;
        }
        cout<<'\n';

    }
    return 0;
}