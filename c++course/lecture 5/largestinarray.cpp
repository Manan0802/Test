#include<iostream>
#include<climits>
using namespace std;

int main(){
    int a[]={10,5,6,3,8,-1};
    int n= sizeof(a)/sizeof(int);
    int largest=INT_MIN;
    for (int i=0;i<n;i++){
        if(a[i]>largest){
            largest= a[i];
        }
    }
    cout<<"largest no "<<largest;
    return 0;
}
