#include<iostream>
using namespace std;
int sum(int n ){
    //base case
    if(n == 1){
        return 1;
    }
    return n+sum(n-1);
    //recurence relation 
    //int chotaans=sum(n-1);
   // int ans=n+chotaans;
    //return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;

}