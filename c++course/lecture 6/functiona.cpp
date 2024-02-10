#include<iostream>
using namespace std;
//function declaration
void printhello(){
    cout<<"hello world"<<'\n';
    }
void add(int a,int b){
    cout<<a+b<<'\n';
}

//function definatiom done above
int main(){
    printhello();
    //function calling or  function invoking
    int a=10;
    int b=20;
    add(a,b);

    return 0;
}
