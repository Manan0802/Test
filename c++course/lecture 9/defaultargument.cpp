#include<iostream>
using namespace std;
int add(int a,int b,int c=0){
    return a+b+c;
}
int main(){
    cout<<add(10,20,30);
    cout<<add(10,20);
}
