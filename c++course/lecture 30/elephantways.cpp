#include<iostream>
using namespace std;
int topdown(int i,int j){
    if(i==0 and j==0){ // jaha pe i and j 0 hai yani phala block maine apna base case bbhi whaa reach karne ka tarika 1 hee hain
        return dp[i][j] = 1;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    int ans=0;
    for(int k=0;k<=i-1;k++){
        ans=ans+topdown(k,j,dp);//issme sum kara coloumn fix karke 
    }
    for(int k=0;k<=j-1;k++){
        ans=ans+topdown(i,k,dp);// issme sum kara row fix karke 
    }
    return dp[i][j]= ans;
}
//iska bottomup notes mai se dekhlena same hee hai 
int main(){
    int i,j;
    cin>>i>>j;
    int dp[100][100];
    memset(dp,-1,sizeof(dp));
    cout<<topdown(i,j,dp)<<endl;
    return 0;
}