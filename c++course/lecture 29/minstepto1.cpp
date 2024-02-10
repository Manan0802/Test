//hume n ko mminimum steps mai 1 bana haai 
#include<iostream>
#include<climits>
using namespace std;

int minsteps(int n,int *dp){
    if(n==1) return dp[n]=0;//agar n 1 haai toh koi kam nhi 
    if(dp[n] != -1) return dp[n];//sabse phale check kara calculate karne se phale  ke kahi hai toh nhi store 
    //recursive case 
    int op1,op2,op3;
    op1=op2=op3=INT_MAX;//initsaize infinty se karduia ki vo return hoga jab koi case hit nhi karega 
    //divided by 3 (yeh kam humne kardia )
    if(n%3==0) op1=minsteps(n/3,dp);//yhe kam recusrsion ko boldia 
    //divided by 2 (yeh kam humne kardia )
    if(n%2==0) op2=minsteps(n/2,dp);//yhe kam recusrsion ko boldia 
    //n-1   (yeh kam humne kardia )
    op3=minsteps(n-1,dp);//yhe kam recusrsion ko boldia 
    return dp[n]= 1+ min(op1,min(op2,op3));//ismme jo kam humne kara step wo bakki ka recursion bata dega aur return karwane se phale store 


}
int bottomup(int n){
    int dp[10000];
    dp[1]=0;//base case se inialize kardia is case mai 0 pe toh kuch nho hoga  1 pe 0 kardia 
    for(int i=2;i<=n;i++){//abb 2 se bharna hai 
        int op1,op2,op3;
        op1=op2=op3=INT_MAX;
        // humne isme 3 option calculate kare /3 /2 and -1 inn teeno option ka jo bhi banegaa wo hum lelemge 
        if(i%3 == 0)op1=dp[i/3];//divide by 3 
        if(i%2 == 0)op2=dp[i/2];//divide by 2 
        op3=dp[i-1];//yeh -1 wala
        dp[i]=1+min(op1,min(op2,op3));//isme +1 kara kyu kki step humne kara wo humare ko dp ke array ki ek value pe la dalega jisske badd fir hum usko apne ans mai jodd denge 

    }
    return dp[n];// toh dp[n] pe hume apna ans milegaa 

}
int main(){
    int n;
    cin>>n;
    int dp[10000];
    for(int i=0;i<=n;i++){
        dp[i]=-1;

    }
    cout<<minsteps(n,dp)<<endl;
    cout<<bottomup(n)<<endl;
    return 0;

    
}