#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rem=0;
    int no=0;
    int cnt=0;
    int x=0;
    while (n>0)
    {
        rem=n%10;
        if (rem == 0 ){
            rem =5;
        }
        cnt++;
        x=rem*pow(10,cnt-1);
        no=no+x;
        n=n/10;
    }
    cout<<no<<endl;
    cout<<cnt;
    return 0;
    
}