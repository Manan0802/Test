#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int sum1=0;
    int sum2=0;
    int rem=0;
    while(t>0){
        int n;
        cin>>n;
        while(n>0){
            rem=n%10;
            if(rem%2==0){
                sum2=sum2+rem;
            }
            else{
                sum1=sum1+rem;
            }
           
            n=n/10;
        }
         if(sum1%3==0 || sum2%4==0){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }

        int sum1=0;
        int sum2=0;
        int rem=0;
        t--;

    }
    return 0;
}