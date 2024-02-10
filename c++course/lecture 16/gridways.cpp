#include<iostream>
using namespace std;
int way(int i,int j){
    //base case
    if(i==0 and j==0){
        return 1;
    }
    if(i<0 || j<0){
        return 0;
    }
    //recursive case
    return way(i-1,j)+way(i,j-1);
}
int main(){
    int i;
    cin>>i;
    int j;
    cin>>j;
    
    cout<<way(i,j);
    return 0;
   
}

