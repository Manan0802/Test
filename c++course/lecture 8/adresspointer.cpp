#include<iostream>
using namespace std;
int main(){
    int x=10;
    float f=10.11;
    char ch='A';
    int*xp=&x;
    float *fy=&f;
    char *cp=&ch;
    // cout<<xp<<"\n"<<fy<<"\n"<<cp<<"\n";
    cout<<&ch<<", "<<cp<<endl;
    return 0;


    
}