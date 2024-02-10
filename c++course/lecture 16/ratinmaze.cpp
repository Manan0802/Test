#include<iostream>
using namespace std;
bool ratmaze(char maze[][10],int i,int j,int n,int m,int sol[][10]){
    //base cae
    if (i == n - 1 and j == m - 1) {
		sol[i][j] = 1;
		// print the solution
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << sol[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return false;
	}
    // recursive case
    //phele right dekho 
    sol[i][j]=1;
    if(j+1<m and maze[i][j+1] != 'X' and sol[i][j+1] != 1){
        bool rightserasta=ratmaze(maze,i,j+1,n,m,sol);
        if(rightserasta){
            return true;
        }
    }
    // Down dekhlo
	if (i + 1 < n and maze[i + 1][j] != 'X' and sol[i + 1][j] != 1) {
		bool kyaNeechseSeRaastaMilla = ratmaze(maze, i + 1, j, n, m, sol);
		if (kyaNeechseSeRaastaMilla) {
			return true;
		}
	}

	// left dekhlo
	if (j - 1 >= 0 and maze[i][j - 1] != 'X' and sol[i][j - 1] != 1) {
		bool kyaPeecheSeRaastaMilla = ratmaze(maze, i, j - 1, n, m, sol);
		if (kyaPeecheSeRaastaMilla) {
			return true;
		}
	}

	// upwards dekhlo
	if (i - 1 >= 0 and maze[i - 1][j] != 'X' and sol[i - 1][j] != 1) {
		bool kyaUparSeRaastaMilla = ratmaze(maze, i - 1, j, n, m, sol);
		if (kyaUparSeRaastaMilla) {
			return true;
		}
	}

	sol[i][j] = 0;
	return false;
}



int main(){
    char maze[][10]={
        "0X0000","0X00X0","0XX0X0","0X00X0","0X0X00","000X00"
    };
    int sol[10][10]={0};
    ratmaze(maze,0,0,6,6,sol);


	
    return 0;
}