#include<iostream>
using namespace std;
int sumaray(int a[],int n){
    int  sum=0;
    for(int i=0;i<=n-1;i++){
        sum=sum+a[i];

    }
     return sum;


}

int main(){
    int a[]={0,1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(int);


     
    int sum= sumaray(a,n);
    cout<<sum;
    return 0;
}
    

