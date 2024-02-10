#include<iostream>
using namespace std;
void bubblesort(int a[],int n,int i){
    //base rln
    if(i== n-1){
        return ;

    }
    
    for(int j=0;j<n-1;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }

    bubblesort(a,n,i+1);
}
int main(){
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubblesort(a,n,0);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}