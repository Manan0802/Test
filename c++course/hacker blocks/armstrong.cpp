#include<iostream>
using namespace std;
int countdigit(int n){
    
     int ans=0;
    
    while(n>0){
        n=n/10;
        ans++;
    
    }
    return ans;
}
int power(int a,int b){
    //a power b
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int sumofdigitpower(int n,int p){
    int ans=0;//store karna hai sum ko 
    while(n>0){
        int cd=n%10;
        ans=ans + power(cd,p);
        n=n/10;

    }
    return ans;
}
bool noisamstrong(int n){
    int countd=countdigit(n);
    int powersum=sumofdigitpower(n,countd);
    if(powersum == n){
        return true;
        
    }
    else{
        return false;
    }
}


int main(){
    int n;
    cin>>n;
    noisamstrong(n);
    if(noisamstrong(n) == true){
        cout<<"true";
        
    } 
    else{
        cout<<"false";
    }  
    return 0;
}
  
