#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // cin>>a[i][j];
            a[i][j] = num++;
        }
    }
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            cout << a[r][c] << " ";
        }
        cout << endl;
    }
    for(int c=0;c<m;c++){
        if(c%2 == 0 ){
            for(int r=0;r<n;r++){
                cout<<a[r][c]<<" ";

            }
        }
        else{
            for(int r=n-1;r>=0;r--){
                cout<<a[r][c]<<" ";
            }
        }
    }
    return 0;
}