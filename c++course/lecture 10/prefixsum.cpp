#include<iostream>
#include<climits>//for calling int_min
using namespace std;

int main(){
     int largest_sum=INT_MIN;
    int s,e;
    
    int n;
    cin>>n;
    int ps[n];
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
        ps[i]=sum;

    }
   

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            
            //for(int k=i;k<=j;k++){
                //cout<<a[k]<<" ";
                //sum=sum+a[k];
                
            //}
            //cout<<"sum: "<<sum;
            sum=ps[j]-((i-1>=0)? ps[i-1] :0);
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