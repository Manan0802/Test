#include<iostream>
using namespace std;

int main(){
    int n;
    int cnt=0;
    cin>>n;
    while (n !=0){
        if ((n & 1)==1){ //move until no becomes 0000
            cnt++;
        }
        n = n>>1;


    }
    cout<<"no of set bits   "<<cnt;
    return 0;
}

