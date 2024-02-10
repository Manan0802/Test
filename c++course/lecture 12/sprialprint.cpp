#include<iostream>
using namespace std;
void spiralspring(int a[][100],int n ,int m){
    //sprial print
    int sr,sc,er,ec;
    sr=0;
    er=n-1;
    sc=0;
    ec=m-1;
    while(sr<=er && sc<=ec){
        //print sr[sc se  ec]
        //print ec[sr se er]
        //print er[ec se sc]
        //print sc[er se sr]
        for(int col=sc;col<=ec;col++){
            cout<<a[sr][col]<<",";
        }

        sr++;
        for(int row= sr;row <=er;++row ){
            cout<<a[row][ec]<<",";
        }
        ec--;
        if(sr<er){
        for(int col=ec;col>=sc;--col){
            cout<<a[er][col]<<",";
        }
        er--;
        }
        if(sc<ec){
        for(int row=er;row>=sr;--row){
            cout<<a[row][sc]<<",";
        }
        sc++;
        }

    }
    
}


int main(){
    int n, m;
    cin >> n >> m;
    int a[100][100];
    //int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
             cin>>a[i][j];
            //a[i][j] = num++;
        }
    }
    //for (int r = 0; r < n; r++)
    //{
     //   for (int c = 0; c < m; c++)
     //   {
     //       cout << a[r][c] << " ";
     //   }
     //   cout << endl;
   // }
    spiralspring(a,n,m);
    cout<<"END";
    return 0;
}

    