#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    // v.push_back(6);
    // v.push_back(7);
    // v.push_back(8);
    // v.push_back(9);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        cout<<"capacity "<<v.capacity()<<" "<<"size "<<v.size()<<endl;
        
    }

    //v.pop_back();//end se elment remove 
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
