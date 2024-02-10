#include<iostream>
using namespace std;
bool issafe(int board[][100],int i,int j,int n){
    //first row and coloumn will be checked
    for(int r=0;r<i;++r){
        if(board[r][j]){
            return false;
        }
    }
    //now check upper right diagnol
    //we initalised with x and y so that cordinate dont get lost
    int x=i;
    int y=j;
    while(i>=0 and j<n ){
        if(board[i][j]){
            return false;
        }
        i--;
        j++;
    }
    //check for upper left diagnol
    while(x>=0 and y>=0){
        if(board[x][y]){
            return  false;
        }
        x--;
        y--;
    }
    //kai queen nhi milli 
return true;

}
bool Nqueen(int board[][100],int i,int n){
    //base case 
    if(i==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                board[i][j]==1? cout<<"Q ":cout<<"_ ";
            }
            cout<<endl;
        }
        cout<<endl;
        return false;
    }
    //recursive case
    for(int j=0;j<n;j++){
        if(issafe(board,i,j,n)){
            //is safe hai toh queen ko rakhdo
            board[i][j]=1;
            bool bakkiplacedhui=Nqueen(board,i+1,n);//by recursion
            if(bakkiplacedhui == true){
                return true;
            }
            //agar bakki queens not placed toh current queen galat  hai hatao
            board[i][j]=0;//backtracking
        }
    }
    return false;
}
                
int main(){
    int board[100][100]={0};
    int n=5;
    Nqueen(board,0,n);

    return 0;
}