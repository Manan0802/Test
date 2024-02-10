#include<iostream>
using namespace std;

int main(){
    int n,i,j,no;
    no=1;
    cin>>n;
    for( i=1;i<=n;i++){
        for( j=1;j<=n-i;j++){
            cout<<" ";
        }
        no=i;
        for(int k=1;k<=i;k++){
        cout<<no++;
        }
        no=2*i-2;
        for(int m=1;m<=i-1;m++){
        cout<<no--;
        }

        cout<<"\n";
        
    }
    for( i=3;i>=0;i--){
        for( j=1;j<=n-i;j++){
            cout<<" ";
        }
        no=i;
        for(int k=1;k<=i;k++){
        cout<<no++;
        }
        no=2*i-2;
        for(int m=1;m<=i-1;m++){
        cout<<no--;
        }

        cout<<"\n";
    }
    return 0;
}



