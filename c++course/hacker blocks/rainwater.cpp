#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rem=0;
    int no=0;
    int x;
    
    while(n>0){
        
        rem=n%10;
        if(rem>=5){
            x=9-rem;

        }
        else{
            x=rem;
        }
        n=n/10;
        
        
        
    }
   
   