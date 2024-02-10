#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    for( i=1;i<=n;i++){
        for(int j=1;j<=8-2*i;j++){
            cout<<"  ";

        }
        int no=i;
        for(int k=1;k<=i;k++){
            cout<<no--<<" ";
            
            
        }

        for(int m=1;m<=2*i-3;m++){
            cout<<"  ";
        }

        int no1=1;
        for(int n=0;n<=i-1;n++){
            if(i==1){
                break;
            }
            cout<<no1++<<" ";
            
            
        }
        cout<<'\n';
    }
    for( i=(n+1)/2;i>0;i--){
        for(int j=1;j<=8-2*i;j++){
            cout<<"  ";

        }
        int no=i;
        for(int k=1;k<=i;k++){
            cout<<no--<<" ";
            
            
        }

        for(int m=1;m<=2*i-3;m++){
            cout<<"  ";
        }

        int no1=1;
        for(int n=0;n<=i-1;n++){
            if(i==1){
                break;
            }
            cout<<no1++<<" ";
            
            
        }
        cout<<'\n';
    }
    return 0;
}