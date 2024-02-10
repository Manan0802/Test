#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    int i=1;
    while(i<=n){
        int no;
        cin>>no;
        ans=ans^no;
        i++;
    }

    cout<<"unique no"<<"  "<<ans;
    return 0;
}

