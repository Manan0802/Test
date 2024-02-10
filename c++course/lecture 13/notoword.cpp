#include<iostream>
using namespace std;
char keys[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void inttostring(int n){
    //base case 
    if (n==0){//jan n 0 hoga troh kuch bhi return 0
        return;

    }
    int ld=n%10;

    //recurence rln
    inttostring(n/10);
    cout<<keys[ld]<<" ";

}
int main(){
    int n;
    cin>>n;
    inttostring(n);
    cout<<endl;
    return 0;
}

    
