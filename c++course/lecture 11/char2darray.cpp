#include<iostream>
using namespace std;
int main(){
    //a[0]:represents the starting adress of 0 th row
    //a[1]:represents the starting adress of 1 th row
    //a[2]:represents the starting adress of 2 th row

    char a[][3]{
        {'a','b','\0'},{'c','d','\0'},{'e','f','\0'}
    };
    cout<<a[0]<<endl<<a[1]<<endl<<a[2]<<endl;
    return  0;
}