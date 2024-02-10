#include<iostream>
#include<climits>
using namespace std;
int solve(int amt,int *deno,int n,int *dp){//amount deno ka array size of deno ka array and dp ka aaray
    //base case 
    if(amt == 0)return dp[amt]= 0;//koi amt nhi hai toh 0 pe 0 store karadia 
    if(dp[amt] != -1) return dp[amt];//check before calculating 
    //recursive case 
    int ans=INT_MAX;
    for(int i=0;i<n;++i){//deno walle array pe iterste kara 
        if(amt >= deno[i]){//bhyi amt badda hai tabhi ghatange 
            int x=solve(amt-deno[i],deno,n,dp);//ek step ghatane ka humne karia bakki ka recursion ko boldia 
            if (x != INT_MAX) ans=min(ans,x+1);
        }
    }
    return dp[amt]= ans;//returun krne se phle store 

}
int bottomup(int totalamnt,int *deno,int n){
    int *dp=new int[totalamnt+1];//dp ka aaray banaya 
    for(int i=0;i<=totalamnt;i++){
        dp[i]=INT_MAX;//sabm infinty leia kyu ki aage wo min lena hai 

    }
    dp[0]=0;//inialisze mardia 
    for(int rupay=1;rupay<=totalamnt;++rupay){
        for(int i=0;i<n;i++){//denno walli array pe iterate kara 
            if(rupay >= deno[i]){//check kara exxsitence pe ke positive hona chaiye
                int kamrupay=rupay-deno[i];
                if(dp[kamrupay] != INT_MAX)
                dp[rupay]=min(dp[rupay],dp[kamrupay]+1);
            }
        }
    }
    return dp[totalamnt];//basicaly final ans return ho jayega 
}
int main(){
    int deno[]={1,7,10};
    int n=sizeof(deno)/sizeof(int);
    int amt;
    cin>>amt;
    int dp[10000];
    for(int i=0;i<=amt;i++){
        dp[i]=-1;

    }
    cout<<solve(amt,deno,n,dp)<<endl;
    cout<<bottomup(amt,deno,n)<<endl;
    return 0;

}