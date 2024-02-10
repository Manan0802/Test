#include<iostream>
using namespace std;
void printinc(int n){
    //base case
    if(n == 0){
        return;
    }
    printinc(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    printinc(n);
    return 0;
}