#include<iostream>
using namespace std;
int fibonacci(int n){
    //base condin
    if(n == 0){
        return 0;

    }
    if(n == 1 ){
        return 1;

    }
    //if(n==0||n==1){ retuurn n;}
    return fibonacci(n-1)+fibonacci(n-2);

}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    cout<<fibonacci(i)<<" ";

}
return 0;
}