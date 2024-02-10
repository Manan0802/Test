#include<iostream>
using namespace std;
void  solve(int a[],int n,int b[],int m){
    int i=0,j=0,sa=0,sb=0,ans=0;
    while(i<n and j<m){
        if(a[i]<b[j]){
            sa+=a[i++];
        }
        else if(a[i]  == b[j]){
            if(sa>sb){
                ans=ans+sa;
                ans=ans+a[i];
                i++;
                j++;
                sa=0;
                sb=0;
            }

        }

    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a[1000],b[1000],n,m;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
         cin>>m;
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
    }
}
