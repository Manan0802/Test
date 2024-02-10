#include<iostream>
using namespace  std;
int main(){
    int a[50];
   // a[0]=1;
   // a[1]=2;
// a[2]=3;
//here wew aobser i+1 SO LOOP i+1
int n;
cout<<"enter n(mAX VALUE CAN BE 50): ";
cin>>n;
for(int i=0;i<n;i++){
    a[i]=i+1;

}
   // cout<<a[0]<<"  "<<a[1]<<"  "<<a[2]<<"  ";
   //since  it is bekar to wright one one karke so we can use loop to PRINT 
   
   for(int i=0;i<n;i++){
    cout<<a[i]<<'\n';
   }

    return 0;


}