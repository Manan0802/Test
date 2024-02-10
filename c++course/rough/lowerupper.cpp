#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    char ch;
    for(int i=1;i<=n;i++){

    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"lowercase"<<endl;
    }
    else if(ch>='A' && ch<='z'){
        cout<<"UPPERCASE"<<endl;
    }
    else{cout<<"Invalid"<<endl;
    }
    }
    return 0;
    }
