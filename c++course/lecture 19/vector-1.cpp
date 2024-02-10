#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
   // vector<int>v(n,100);//yeh haoagya ja humare sarrri ucet mai yeh value hi dalni hoo
    vector<int>v(n);//user input
    cout<<"capacity:"<<v.capacity()<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.push_back(-1);
    cout<<"capacity:"<<v.capacity()<<endl;


}