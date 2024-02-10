//finding 7 from last
#include<iostream>
using namespace std;
int check_7(int a[100],int n,int i){
    //base rln 
    if(i==0){
        return -1;
    }
    // recurence rln
    if(a[i]== 7){
        return  i;
    
    return check_7(a,n,i-1);
        
    }

}
int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    cout<<check_7(a,n,n-1)<<" ";
    return 0;

}