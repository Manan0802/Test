#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int r;
    cin>>r;
    int c;
    cin>>c;  
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        if(i%2 == 0 ){
            for(int j=0;j<r;j++){
                cout<<a[i][j]<<", ";

            }
        }
        else{
            for(int j=c-1;j>=0;j--){
                cout<<a[i][j]<<", ";
            }
        }
    }
    cout<<"END";
    return 0;
}
