#include<iostream>
#include<cmath>
using namespace std;
int main(){
    //input array
    int n;
    cin>>n; 
    int a[n];
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int ans=0;
            ans=abs(a[i]-a[j]);
            if(ans == k){
                cout<<i<<","<<j<<endl;
            }
        }
    }


}
