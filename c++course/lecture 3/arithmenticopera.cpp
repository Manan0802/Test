#include<iostream>
using namespace std;

int main(){
    int a=1;
    cout<<a++<<'\n';//ans will be 1 becuase phale vo assign karega and then update
    cout<<++a<<'\n';
    //ans will be 3 resaon phale udpdate hoke 2 hogaya now increment hoga so ans 3
    //now value a is 3 only
    int x=100;
    int y=--x;//now value of x is decremnted same way means here it becomes 99 and x and y are equal
    int z=(a++) + (++a);
    cout<<x<<'\n'<<y<<'\n'<<z<<'\n'<<a;
    return 0;
}
