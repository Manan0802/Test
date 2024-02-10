#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cin>>n;
    
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            int k=1;
            while(k<=j){
                if(k==1||k==i){
                    cout<<i-1;}
                    else{
                        cout<<"0";
                    }
                
            }
        }
        cout<<'\n';

    }
    return 0;
}

       
