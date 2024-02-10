#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=1;
    for( int i=1;i<=n;i++){
        for( int j=1;j<=i;j++){
            cout<<'*';
        }
        cout<<" ";
        for( int k=1;k<=n+1-i;k++){
            cout<<'*';
        }
        cout<<" ";
        for( int l=1;l<=n+1-i;l++){
            cout<<'*';
        }
        cout<<" ";
        for( int m=1;m<=i;m++){
            cout<<'*';
        }
        cout<<'\n';
    }
    return 0;
}

    