#include<iostream>
#include<map>
using namespace std;
map<int,bool>adj[200005];

int main ()
{
    int n,u,v,i,j,bfs[200005];
    cin>>n;
    for (i = 0; i < n-1; i++)
    {
        cin>>u>>v;
        adj[u][v]=true;
        adj[v][u]=true;
    }
    for (i = 0; i < n; i++)
    {
        cin>>bfs[i];
    }
    for (i = 0, j = 1 ; i < n ; i++)
    
    
    
    
    
    
    
        {
       while(adj[bfs[i]][bfs[j]] == true)
       j++;
    }
    if(j==n && bfs[0] == 1) cout<<"Yes\n";
    else cout<<"No";
    
    
    
    return 0;
}