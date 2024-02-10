#include<iostream>
using namespace std;
int fibo(int n){ //recursion se solve karne ka tarika 
    //base case 
    if(n<=1) return n;
    //recursive case 
    return fibo(n-1)+fibo(n-2);

}
int topdown(int n,int *dp ){// topdown approch humari basiccaally recusrion plus memorization walli hoti hai based 
    if(n<=1)return n;//means n=0||  n=1 pe 0 ya 1 hi return hoga aur return se pahle store 
    if(dp[n] != -1) return dp[n];//return se phle check karo fir neeche jao 
    //recursive case 
    return dp[n]=topdown(n-1,dp)+topdown(n-2,dp);//calculate  karo fir return se pahle check 
}

int bottomup(int n){//yeh humari iterative approch hogi
    int* dp=new int[n+1];//yeh dp ka array banaya dyanmically till n
    //in genral topdown ka base case intialisation ke kam aayega 
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;++i){//yeh humara loop hogyaa 
        dp[i]=dp[i-1]+dp[i-2];

    }
    return dp[n];//yeh final ans
}
int main(){
    int n;
    cin>>n;
    int* dp=new int[n+1];
    for(int i=0;i<=n;i++){
        dp[i]=-1;
        
    }
    cout<<topdown(n,dp)<<endl;
    cout<<bottomup(n)<<endl;
    cout<<fibo(n)<<endl;
    return 0;

}