#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<int>>adj;
    void addedge(int u,int v,bool bidir=true){
        adj[u].push_back(v);
        if(bidir) adj[v].push_back(u);

    }
    bool checkbipartiehelper(unordered_map<T,int>&color,int currentrang){
        color[node]=currentrang;
        for(auto children: adj[node]){
            bool bachebipartiehai=checkbipartie(color,children,3-currentrang,node);
            if(!bachebipartiehai) return false;
            if(children != node and color[children] == currentrang) return false;
        }
        return true;

    }
    bool checkbipartite(){
        unordered_map<tT,int>color;
        for(auto p: adj){
            color[p.first]=0;
        }
        for(auto p: adj){
            if(color[p.first]== 0){
                if(!checkbipartiehelper(color,node,1,node))return false;

            }
            

        }
        return true;
        

    }
};
int main(){
    Graph<int> g;
    g.addedge(1,2);
    g.addedge(1,4);
    g.addedge(1,2);
    
    g.addedge(1,2);
    g.addedge(1,2);

}