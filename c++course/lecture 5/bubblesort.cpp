#include<iostream>
using namespace std;

int main(){
    int a[]={5,4,3,2,1};
    int n=sizeof(a)/sizeof(int);
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                //methood to swap method 1
                
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                //method to swap without temp
                //a=a+b;(a=5 ,b=10 a+b=15)
                //b=a-b;(b=15-10=5)
                //a=a-b;(a=15-5=10)hence sawaperd
                //method to swap  in single line 
                //b=(a+b)-(a=b);


            }
        }
    }
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    return 0;
}