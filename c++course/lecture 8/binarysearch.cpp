#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int key){
    int s=0,e=n-1;
    while(s<=e){
       int m=(s+e)/2;
       if(a[m]==key){
        return m;
       }
       else if(key>a[m]){
        s=m+1;
       }
       else{ e=m-1;
       }
    }
    return -1;//we didimt return 0 because 0 index will exit
}

int main(){
    int a[]={1,2,5,8,9};//array should nbe sorted
    int n=sizeof(a)/sizeof(int);
    int ans=binarysearch(a,n,8);
    
    if(ans !=-1){
    cout<<ans;}
    else{
        cout<<"elment not found";
    }

}