#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int cnt=0;
    int i=1;
    while(cnt<n1){
        int value=3*i+2;
        if(value%n2 != 0){
            cout<<value<<'\n';
            cnt++;
        }
        i++;
    }
    return 0;
}
        
            
    