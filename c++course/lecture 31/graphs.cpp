#include<iostream>
#include<list>
using namespace std;
class graph{
    public:
    int n;//no of node in graph
    list<int> *adjlist;// array of llist banaya dynamically(ll ka pointer banaya )
    graph(int N){//node pass 
        n=N;// nodes 
        adjlist=new list<int>[n];//link list of aaray -
    }
    void addedge(int u,int v,bool bidir=true){//hume u se v ke beech mai ek edge dalni hai 
        adjlist[u].push_back(v);//mtlb (u,v)as an edge insert karni hai toh jo ll ka uth index hai uspe humne v ko connect mardiaa 
        if(bidir){//agar birection hai toh means v,u existing hai 
            adjlist[v].push_back(u);//isme bhi humne same kam kara 
        }
    }
    //printing
    void print(){
        for(int i=0;i<n;i++){//yeh toh hum index ko represent kar rahe hai 
            cout<<i<<"->";//stl hai isliye for each loop lenge 
            for(auto neighbour: adjlist[i]){//iska mane apne aapp wo harr list ke arraylist pe ja raha hai aur khudbakhud uske saree neighbours ko iterate kar raha hai 
                cout<<neighbour<<" ";//neighbour print 

            }
            cout<<endl;

        }
    }
    bool edgeispresent(int u,int v){//check kara u ka neighbour v hai ya nhi 
        for(auto neighbour : adjlist[u]){//simply harr loop pe jake dekhaa 
            if(neighbour == v){//milgaya 
                return true;//returned true 
                
            }
        }
        return false;
    }
};
int main(){
    graph g(5);
    g.addedge(0,1);
    g.addedge(0,4);
    g.addedge(1,4);
    g.addedge(4,3);
    g.addedge(3,1);
    g.addedge(2,1);
    g.addedge(2,3);
    g.print();
    if(g.edgeispresent(1,3)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}

