#include<iostream>
using namespace std;

int main(){
    int j;
    int a[]={5,4,1,2,6};
    int n=sizeof(a)/sizeof(int);
    for(int i=1;i<n;i++){
        int hpc=a[i];
        for( j=i-1;j>=0;j--){
            if(a[j]>hpc){
                a[j+1]=a[j];
            }
            else{break;
            }
        }
        a[j+1]=hpc;

    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

    