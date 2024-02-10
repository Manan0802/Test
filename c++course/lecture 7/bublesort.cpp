#include<iostream>
using namespace std;
void bubblesort(int a[],int n){
    
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                swap(a[i],a[i+1]);
            }
        }

}
}
void printarray(int a[],int n){
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<'\n';
}

int main(){
    int n;
    cout<<"how many elements are you going to enter?:\n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    //printarray(arr,n);
    bubblesort(arr,n);
    cout<<"order of sorted elements\n";
    printarray(arr,n);
    return 0;
}

   
