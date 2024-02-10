#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"enter no of rows";
    cin>>n;
    int i=1,no=1;//initaiziation of no and theen for row loop
    while (i<=n){
        int j=1;//for number entering
        while(j<=i){

            j=j+1;
            cout<<no<<" ";
            no=no+1;//updation of number
        }
        i=i+1;
        cout<<endl;


    }
    return 0;
}
