#include<iostream>
#include<vector>
using namespace std;
int main(){
    int rows,cols;
    cin>>rows>>cols;
    vector<vector<int>>v(rows,vector<int>(cols));
    int num=1;
    for(int i=0;i<rows;++i)
    {
        for(int j=0;j<cols;++j){
            v[i][j]=num++;
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;++j){
            cout<<v[i][j]<<" ";
        }
    }
    cout<<endl;
}















//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;