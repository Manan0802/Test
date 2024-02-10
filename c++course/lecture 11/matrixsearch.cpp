#include <iostream>
using namespace std;
int main()
{
    
    int n, m ,key;
    cin >> n >> m >>key;
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
    bool keyfound =false;
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            if(a[r][c] == key){
                cout<<"key at  index: "<<r<<","<<c<<endl;
                break;
            }
        }
        if(keyfound == true){
            break;
        }
    
    
    }
    return 0;
}
