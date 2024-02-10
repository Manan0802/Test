#include<iostream>
using namespace std;
int fact(int n ){
    // base case 
    if(n == 0){
        return 1;//fact 0=1
    }
    //recurrance relattion,fact(n)=n*fact(n-1)
    int chotaans = fact(n-1);
    int ans=n*chotaans;
    return ans;
    //ALTERNATIVE
    //int fact(int n){
        //if(n == 0){
        //return 1;//fact 0=1
    //}  
    //return n*fact(n-1);
    // }
}
int main(){
    int n;
    cin>>n;
    fact(n);
    cout<<fact(n)<<endl;
    return 0;

}
