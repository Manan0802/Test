#include<iostream>
using namespace std;
int main(){
    int n,no1,no2,rem1,rem2,rem3;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>no1>>no2;
    
   //reversing no n1
   int revsersedno1=0;
  
    

    while(no1>0){
        rem1=no1%10;
        revsersedno1=revsersedno1*10 + rem1;
        no1=no1/10;

    }
   //reversing no2
   int revsersedno2=0;

    

    while(no2>0){
        rem2=no2%10;
        revsersedno2=revsersedno2*10 + rem2;
        no2=no2/10;

    }
    int sum=revsersedno1+revsersedno2;
    int x=0;
    while(sum>0){
        rem3=sum%10;
        x=x*10 + rem3;
        sum=sum/10;
    }
    cout<<x<<endl;
    }
    
    return 0;
}
    
