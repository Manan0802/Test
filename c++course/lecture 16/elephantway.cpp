#include<iostream>
using namespace std;

int way(int  i,int j){
    //base case 
    if(i==0 and j==0){
        return 1;
    }
    //recursive case 
    int ans=0;
    for(int m=0;m<i;m++){
        ans=ans+way(m,j);
    }
    for(int m=0;m<j;++m){
        ans=ans+way(i,m);
    }
    return ans;
}
int main(){
    cout<<way(3,3)<<endl;
    return 0;

}