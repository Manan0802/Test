#include<iostream>
using namespace std;

int main(){
    int n,rem;
    cin>>n;
    int cnt=0;
    while(n>0){
        rem=n%2;
        if(rem==1){
                cnt++;
        }
        n=n/2;
    }
    cout<<"no of setbits    "<<cnt;
    return 0;
}
