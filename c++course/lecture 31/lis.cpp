#include<iostream>
#include<vector>
#include<climits>

using namespace std;
void findlis(int *a,int *dp,int indx,vector<int>&v,int previncval,int len){
    //base case 
    if(indx == -1){
        if(len == 0){
            for(int i=v.size()-1;i>=0;--i){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        return;

    }

    
    //recursive case 
    //agr first time aa rahe hai
    //cureent indx,LIS ka part hoga 
    if(dp[indx] == len and a[indx]<previncval){
        v.push_back(a[indx]);
        findlis(a,dp,indx-1,v,a[indx],len-1);
        v.pop_back();
    }
    findlis(a,dp,indx-1,v,previncval,len);


}
int main(){
    int a[] = {10,9,3,5,4,11,7,8};
    int n = sizeof(a)/sizeof(int);

    int dp[10000];
    for(int i=0; i<n; i++){
        dp[i] = 1;
    }
    int ans = 0;
    int indx;
    for(int i=1; i<n; i++){
        for(int j=i-1; j>=0; j--){
            if(a[i]>a[j]){
                dp[i] = max(dp[i], 1+dp[j]);
                // ans = max(ans, dp[i]);
                if(dp[i]>ans){
                    ans = dp[i];
                    indx = i;
                }
            }
        }
    }
    cout<<"Index : "<<indx<<endl;
    cout<<ans<<endl;
    vector<int> v;
    findlis(a, dp, indx, v, INT_MAX, ans);

}