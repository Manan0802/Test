#include<iostream>
using namespace std;
void printdec(int n){
    //base case
    if(n == 0){
        return;
    }
    //recurence reln
    cout<<n<<" ";
    printdec(n-1);

}
int main(){
    int n;
    cin>>n;
    printdec(n);
    return 0;

}