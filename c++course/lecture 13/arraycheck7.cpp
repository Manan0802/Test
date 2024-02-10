//check 7 in array 
#include<iostream>
using namespace std;
bool check_7(int a[1000],int n){
    if(n == 0){
        return false;
    }
    if(a[0]==7){
        return true;
    }
    //we also simply use  return check7(a+1,n-1)
    bool checksmall=check_7(a+1,n-1);
    if(checksmall==true){
        return true;
    }
    else{
        return false;
    }
   


}
int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    
    if(check_7(a,n)== true ){
        cout<<"7 is there ";
    }
    else{
        cout<<"7 not there ";
    }
    return 0;

}