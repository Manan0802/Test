//finding first postion where 7 there
#include<iostream>
using namespace std;
int first7(int a[100],int n){
    //base case 
    if(n==0){//no of elemnets 0
        return -1;
    }
    //recursive case 
    if(a[0]==7){
        return 0;
    }
    int smallindex=first7(a+1,n-1);
    if(smallindex== -1){//false hogaya ki 7 hai hi nhi

        return -1;
    }
    else{
        return smallindex+1;
    }
}
//alter method 
int phela7(int a[100],int n,int i,int m){
    //base case 
    if(i==n){
        return -1;
    }
    //reci=ursive rln
    if(a[i]== m){
        return i;
    }
    return phela7(a,n,i+1,m);
}
int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    cout<<"found at index-: "<<first7(a,n)<<" ";
    cout<<"found at index: "<<phela7(a,n,0,m)<<" ";
    
    return 0;
}