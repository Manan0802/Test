#include<iostream>
using namespace std;
bool ratmaze(char maze[][5],int i,int j,int n,int m,int sol[][10]){
    //ek toh maze hai dusre cordinate on whcih standing(i,j)n,m hogaye solution aur fir ek solution walli maze 
    //n hai vert aur m hai horiz
    //base case
    if(i==n-1 and j==m-1){//position of chese
        sol[i][j]=1;//1 mtlb correct jgha movement possible
        //2d aaray ki fir print done 
        for(int i=0;i<n;++i){
            for(int j=0;j<m;j++){
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return false;//this will give all the possible solution if true then 1 will come 
    } 
    //recursive case
    //mann lo current i j soln ka part hai 
    sol[i][j]=1;
    //phlae right se dekha rasta mila 
    if(j+1<m and maze[i][j+1] != 'X'){
        bool  rastamilla=ratmaze(maze,i,j+1,n,m,sol);
        if(rastamilla == true){
            return true;
        }
    }
    //nhi mila toh neeche se check kiya 
    if(i+1<n and maze[i+1][j] != 'X'){
        bool  ifrastamilla=ratmaze(maze,i+1,j,n,m,sol);
        if(ifrastamilla == true){
            return true;
        }
    }
    
    sol[i][j]=0;//rasta mila  hi nhi 
    return false;


}

int main(){
    char maze[][5]={"0X00","000X","00X0","X000","XX00"};
    int sol[10][10]={0};
    ratmaze(maze,0,0,4,4,sol);
    return 0;

}