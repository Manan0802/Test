#include<iostream>
using namespace std;
int  main(){
    int n;
    cin>>n;
    int a[1000000];
    for(int  i=0;i<n;i++){
        cin>>a[i];
    }
    //assuming first elment to be majority one 
    int major =a[0];
    int cnt=1;
    //now loop
    for(int i=1;i<n;i++){
        if(a[i]== major){
            cnt++;
        }
        else{
            cnt--;
        }
        if(cnt == 0){
            major=a[i];
            //checking for next elment 
            cnt=1;
        }

    }
    cout<<major<<endl;
}

    

