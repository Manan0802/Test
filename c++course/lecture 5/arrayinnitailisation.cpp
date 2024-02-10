#include<iostream>
using namespace std;

int main(){
//int a[5]={1,2,3,4,5};//one  more method
int a[]={1,2,3,4,5};
int n=sizeof(a)/sizeof(int);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";

    }
    return 0;
}