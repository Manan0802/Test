#include<iostream>
using namespace std;
void printtable(int i,int j,int k){
    
    //intial,final,step
    
    while (i<=j){
            cout<<i<<" ";
            int ce;
            ce=(5.0/9)*(i-32);//we made one float because float presidence is more if both int ans will be int i.e 0 in this case and hece all ans will be 0
            cout<<ce<<endl;//ce is already given i.e it is a int therfore net printeed  will be int


            i=i+k;




    }
}
    int main(){
        printtable(0,300,20);
        cout<<'\n';
        cout<<'\n';
        printtable(0,100,30);//reuseablity same table

        return 0;

    }

