#include<iostream>
using namespace std;

int main(){
    int i;

    int a[]={1,2,3,4,5,6,7,8,9};
    int n= sizeof(a)/sizeof(int);
    int key; //elment  u are finding is basically defined key
    cin>>key;
    for( i=0;i<n;i++) {
        if(a[i]==key){
            cout<<"key found at index:"<<"  "<<i;
            break;
        }

    }
    if (i==n){     //we ahve checkees alll vqlues as there are n-1 buckets so jab brabar  hogaye so means elmeentr doesnt exit 
        cout<<"key not found";
    }
    return 0;
}