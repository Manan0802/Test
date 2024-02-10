#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int j=1;j<=n;j++){
        cout<<"*"<<"\t";
    }
    cout<<'\n';
    int n1=(n+1)/2;
    for(int i=2;i<=n1;i++){
        for(int j=1;j<=n1-i+1;j++){
            cout<<"*"<<"\t";
        }
        for(int j=1;j<=2*i-3;j++){
            cout<<" "<<"\t";
            
        }
        for(int j=1;j<=n1-i+1;j++){
            cout<<"*"<<'\t';
        }
        cout<<'\n';

    }
    for(int i=n1-1;i>=2;i--){
        for(int j=1;j<=n1-i+1;j++){
            cout<<"*"<<"\t";
        }
        for(int j=1;j<=2*i-3;j++){
            cout<<" "<<"\t";
            
        }
        for(int j=1;j<=n1-i+1;j++){
            cout<<"*"<<"\t";
        }
        cout<<'\n';

    }
    for(int j=1;j<=n;j++){
        cout<<"*"<<"\t";
    }
    return 0;
}
