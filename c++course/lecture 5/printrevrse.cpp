#include<iostream>
using namespace std;

int main(){
    //int a[]={1,2,3,4,5,6,7,8,9};
    //alternative genreal hoo take no from user using loop  only 
    int a[100];
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>> a[i];
    }

    //int n= sizeof(a)/sizeof(int);
    for (int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<"  ";

    }
    return 0;
}

    