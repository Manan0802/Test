#include<iostream>
using namespace std;

int main(){
    int i,j,k;
    //intial,final,step
    cin>>i>>j>>k;
    while (i<=j){
            cout<<i<<" ";
            int ce;
            ce=(5.0/9)*(i-32);//we made one float because float presidence is more if both int ans will be int i.e 0 in this case and hece all ans will be 0
            cout<<ce<<endl;//ce is already given i.e it is a int therfore net printeed  will be int


            i=i+k;




    }
    return 0;
}





