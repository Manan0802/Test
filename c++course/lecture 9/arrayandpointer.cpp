#include<iostream>
using namespace std;
void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<" ";//x[i]=*(x+i)xaddress of 0th bucket in aray  x 
    }
    cout<<endl;

}
void bubblesort(int a[],int n){
    //a[]=*a same thing 
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;++j){
            if(a[j]>a[j+1]){//a[i]=*(a+i)
            //inside if(*(a+i)>*(a+j+1)) similar for swap
                swap(a[j],a[j+1]);
            }
        }
    }

}

int main(){
    int a[]={4,5,9,1,2,3,20};
    int n=sizeof(a)/sizeof(int);
   // cout<<a<<endl;//basically gives addres of 0th index 
   // cout<<&a[0]<<endl;


    printarray(a,n);
    bubblesort(a,n);
    printarray(a,n);                                               
    return 0;
}