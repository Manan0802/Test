#include<iostream>
using namespace std;
int main(){
    char a[]={'h','e','l','l','o','\0'};//in end /0 ie is null is nessary
    cout<<a<<endl;
    char c[]={'h','e','l','l','o'};//outut i hellohello becasue no \0
    cout<<c<<endl;
    char d[12]="hello world";//one char extra for \0
    char e[]="learning string";
    cout<<d<<endl<<e<<endl<<d[2];
    return 0;


}