#include<iostream>
using namespace std;
int revserse(int no){
    int revsersedno=0;
    int rem;

    while(no>0){
        rem=no/10;
        revsersedno=revsersedno*10 + rem;

    }
    no=no/10;
    int ans=revsersedno;
    return ans;

}
int main(){
    int n,no1,no2;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>no1;
        cin>>no2;

    }
    revserse(int no1);