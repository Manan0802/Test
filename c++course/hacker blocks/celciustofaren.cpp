#include<iostream>
using namespace std;
int main(){
    int s;//starting point 
    cin>>s;
    int m;
    cin>>m;//max point
    int k;
    cin>>k;//step value
    for (int i = s; i <=m; i=i+k)
    {
       //cout<<i<<"    "<<5(.0/9)*(i-32)<<endl;
       int cel=(5.0/9)*(i-32);
       cout<<i<<"    "<<cel<<endl;

    }
    return 0;
    
    
}