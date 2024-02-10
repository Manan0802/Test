#include<iostream>
using namespace std;
int gcd(int x,int y){
    if(x==0){
        return y;
    }
    if(y==0){
        return x;
    }
    return gcd(y%x,x);

} 
int main(){
    int x;
    int y;
    cin>>x>>y;
    int hcf=gcd(x,y);
    int lcm;
    lcm=(x*y)/hcf;
    cout<<lcm<<endl;
}

