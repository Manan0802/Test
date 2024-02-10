#include<iostream>
using namespace std;
int main(){
    char a[100];
    int x;
    cin>>x;
    cin.getline(a,100,'.');
    //this  is inbuilt use  directly
    cout<<"number :"<<x<<endl;
    cout<<"string :"<<a<<endl;
    return 0;
}