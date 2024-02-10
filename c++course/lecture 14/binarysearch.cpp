#include <iostream>
using namespace std;
int binarysearcch(int a[],int s,int e,int key){
    //base case 
    if(s>e){
        return -1;
    }
    //recruence reln
    int m=(s+e)/2;
    if(a[m]== key){
        return m;
    }
    else if(key>a[m]){
        return binarysearcch(a,m+1,e,key);
    }
    else{
        return binarysearcch(a,s,m-1,key);
    }
}

int main() {
    int n;
    cin>>n;
    int a[100];
    for(int  i=0 ; i<n;i++){
        cin>>a[i];
    }
    int s,e,key;
    cin>>key;
    cout<<binarysearcch(a,0,n-1,key)<<endl;
    return 0;

    }