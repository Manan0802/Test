#include<iostream>
#include<cstring>
using namespace std;
int main (){
    char a[100]="hello";
    string s="hellos";
    cout<<a<<endl;
    cout<<s<<endl;
    // using loop
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";

    }
    cout<<endl;
    char  m[100];
    strcpy(m,a);
    cout<<m<<endl;
    string m1=s;
    cout<<m1<<endl;
    //contactinate
    

}