#include<iostream>
using namespace std;
void checkprime(int n){
    int i,j;
    for (i=2;i<=n;i++){
        bool i_isprime=true;
        for(j=2;j<i;j++){
            if(i%j==0){
                i_isprime=false;
            }
        }
        if(i_isprime){
            cout<<i<<" ";
        }
    }
}
   

int main(){
    checkprime(10);
    checkprime(2000);
    return 0;
}
