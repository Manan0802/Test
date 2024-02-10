#include<iostream>
using namespace std;
// #define MACRO_NAME MACRO_VALUE
//macro will never evaluate 

#define PI 3.14


int main(){
    int k=1;
    // cout<<2*PI*r ans 6.28
    //second method using const
    //but const can evaluatee
    cout<<2* PI* k <<'\n';
    return 0;
}
