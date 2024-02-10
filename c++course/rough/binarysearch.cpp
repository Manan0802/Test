#include<iostream>
using namespace std;
int binary(int a[],int s,int e,int key){
    if(s>e){
        return -1;

    }
    int m=(s+e)/2;
    if(a[m]== key){
        return m;
    }
    else if(key>a[m]){
        return binary(a,m+1,e,key);
    }
    else{
        return binary(a,s,m-1,key);
    }
}

int main(){
    int n;
    cin>>n;
    int  a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=0;
    int e=n-1;
    int key;
    cin>>key;
    cout<<binary(a,s,e,key)<<endl;
    return 0;
}

    


