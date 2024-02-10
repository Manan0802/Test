#include<iostream>
using namespace std;

bool checksort(int *a,int n){
    //base case 
    if(n <= 1){
        return true;//ek elment is sorted
    }
    //recurence rln
    bool ischotasorted=checksort( a+1,n-1);//a+1 likha hai yeh basically addres hiogay next  bucket ka 
    if(a[0]<= a[1] && ischotasorted){
        return true;
    }
    else{
    
        return false;
    }
}
int main(){
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(int);
    bool ans=checksort(a,n);
    if(ans == true){
        cout<<"sorted"<<endl;
    }

    else{
        cout<<"not sorted"<<endl;
    }
}