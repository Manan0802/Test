#include<iostream>
#include<cmath>
using namespace std;
bool issafe(int mat[][100],int i,int j,int n,int no){
    //sabse phale  checked rows  and coloumns check kaaro
    for(int k=0;k<n;++k){
        if(mat[i][k]== no|| mat[k][j]==no){
            return false;
        }
    }
    n=sqrt(n);
    //abb chote box mai check karo hai ke nhi agr hai toh nhi rakh sakte 
    int si=(i/n)*n;
    int sj=(j/n)*n;
    for (int k = si; k < si + n; ++k)
	{
		for (int l = sj; l < sj + n; ++l)
		{
			if (mat[k][l] == no) {
				return false;
			}
		}
	}

	return true;
}



bool sudukosolve(int mat[][100],int i,int j,int n){
    //base case
    if(i==n){
        //print sudukou
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    //if hum colooums overshoot kargayetohh next row pe  jao 
    if(j==n){
        bool bakisolve=sudukosolve(mat,i+1,0,n);
        return bakisolve;
    }
    //age already cell  fillled toh agle cell ar jao 
    if(mat[i][j] != 0){
        return sudukosolve(mat, i, j + 1, n);
    }
    //recursive case
    //do work for one empty cell
    for(int no=1;no<=n;no++){
        //agar number safe hai toh rakho 
        if(issafe(mat,i,j,n,no)== true){
            mat[i][j]=no;//safe hai toh rah diya 
            //remaing solved toh done hai 
            bool bakisolve=sudukosolve(mat,i,j+1,n);
            if(bakisolve){
                return true;
            }
            //nhi hua toh agle rakhna padega backtrack karo
            mat[i][j]=0;

        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int mat[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    sudukosolve(mat, 0, 0, n);
    return 0;
}

//     int mat[][100] =
// 	{	{5, 3, 0, 0, 7, 0, 0, 0, 0},
// 		{6, 0, 0, 1, 9, 5, 0, 0, 0},
// 		{0, 9, 8, 0, 0, 0, 0, 6, 0},
// 		{8, 0, 0, 0, 6, 0, 0, 0, 3},
// 		{4, 0, 0, 8, 0, 3, 0, 0, 1},
// 		{7, 0, 0, 0, 2, 0, 0, 0, 6},
// 		{0, 6, 0, 0, 0, 0, 2, 8, 0},
// 		{0, 0, 0, 4, 1, 9, 0, 0, 5},
// 		{0, 0, 0, 0, 8, 0, 0, 7, 9}
// 	};


// 	sudukosolve(mat, 0, 0, 9);

//     return 0;
// }