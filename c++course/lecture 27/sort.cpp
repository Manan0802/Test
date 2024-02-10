#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool shyamlal(vector<int>a,vector<int>b){
    return a[0]<b[0];
}
int main(){
    int a[5][2]={
        {1,4},{9,15},{2,8},{12,20},{8,13}
    };
    sort(a.begin(),a.end(),shyamlal);
    for(int i=0;i<5;i++){
        cout<<a[i][0]<<" "<<a[i][1]<<endl;
    }
    return 0;
}