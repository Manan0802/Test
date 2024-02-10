#include<iostream>
#include<climits>//for calling int_min
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int largest_sum=INT_MIN;
    int s,e;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                //cout<<a[k]<<" ";
                sum=sum+a[k];
                
            }
            //cout<<"sum: "<<sum;
            if(sum>largest_sum){
                largest_sum=sum;
                s=i;
                e=j;
            }
        }
    }
    cout<<"largest subarray sum: "<<largest_sum<<'\n';
    for(int i=s;i<=e;++i){
        cout<<a[i]<<" ";
    }
    cout<<'\n';
    return 0;
}
    
        
