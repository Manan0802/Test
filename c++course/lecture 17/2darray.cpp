#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;//n rows aur m coloum\


    //
    int **a=new int*[n];
    for(int i=0;i<n;i++){
        a[i]=new int[m];
    }
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=num++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}