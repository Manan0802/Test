#include<iostream>
using namespace std;
void  pattern(int n){
    //base case 
    if(n==0){
        return;
    }
    pattern(n-1);
    //work;
    for(int i=0;i<n;i++){
        cout<<"*"<<"    ";
    }
    cout<<endl;
    
}
int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}

