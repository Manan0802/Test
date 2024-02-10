#include<iostream>
using namespace std;
int* createarray(int n){//aaray addres is stored in int*
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
    return arr;
    //now in this case we can return array basically array is returned
    

}
void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}
int main(){
    int n;
    cin>>n;

    int *x=createarray(n);
    print(x,n);
    //deleete karne ke liye delete[]x aur fir x=null  takii print na hoo
    return 0;
}