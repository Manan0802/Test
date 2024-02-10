#include<iostream>
using namespace std;
void toh(int n,string scr,string help,string des,int &cnt){
    if (n==0){
        
        return ;
    }
    //n-1 disc ko source se helper
    toh(n-1,scr,des,help,cnt);
    //fir nth disc ko source destination
    cout<<"Move "<< n<<"th" <<" from "<<scr<<" to "<<des<<endl;
    cnt++;
    //n-1 disc ko helper to destination
    
    toh(n-1,help,scr,des,cnt);

}

int main(){
    int n;
    cin>>n;
    int cnt=0;
    toh(n,"T1","T3","T2",cnt);
    cout<<cnt;
    
    return 0;
}