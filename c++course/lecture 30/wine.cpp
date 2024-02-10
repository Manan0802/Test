#include<iostream>
#include<cstring>
using namespace std;
int solve(int *price,int l,int r,int day){//price ka array left se right se aur day of seeling 
    //base case
    if(l>r) return 0; //overshoot
    // recursive case 
    int op1=price[l]*day+solve(price,l+1,r,day+1);//ek botal left walli bakki agli agle din ka recursion se 
    int op2=price[r]*day+solve(price,l,r-1,day+1);//ek botal right  walli bakki agli agle din ka recursion se
    return max(op1,op2);

}
int topdown(int *price,int l,int r,int day,int dp[][100]){//2d dp use hoga kyu ki profit do variables pe depended hai i and j 
    //base case
    if(l>r){
        return dp[l][r]=0;//return karane se pahle store 
    }
    if(dp[l][r] != -1)return dp[l][r]; //calculate karne se pahle check 
    // recursive case(same as above )
    int op1=price[l]*day+topdown(price,l+1,r,day+1,dp);
    int op2=price[r]*day+topdown(price,l,r-1,day+1,dp);
    return dp[l][r]= max(op1,op2);

}
int bottomup(int *price,int n){//isme dp[l][r] represemt karta hai ke l se leke r tak bechne mai kitna profit hogyaaa 
    int dp[100][100]={0};
    for (int l = n-1; l>=0 ;l--)
    {
        for(int r=l;r<n;++r){
            //kitni botale bech di wo hai j-i+1 
            //toh din kitne hogayae usko n se minus 
            //int day =n-(r-l+1)+1;//current day nikalne ke liye plus 1
            int day=n-r+l;
            int op1=price[l]*day+((l+1<n)? dp[l+1][r]:0);
            int op2=price[r]*day+((r-1>=0)? dp[1][r-1]:0);
            dp[l][r]=max(op1,op2);

        }
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;++j){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int a[]={2,3,5,1,4};
    int n=sizeof(a)/sizeof(int);
    int dp[100][100];
    memset(dp,-1,sizeof dp);
    cout<<topdown(a,0,n-1,1,dp)<<endl;
    cout<<solve(a,0,n-1,1)<<endl;
    cout<<bottomup(a,n)<<endl;
    return 0;
}