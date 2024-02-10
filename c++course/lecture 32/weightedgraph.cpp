#include<iostream>
#include<unordered_map>
#include<cstring>
#include<list>
using namespace std;
class graph{
    public:
    unordered_map<string,list pair<string,int>>>h;//hashmap bana lia
    void addedge(string u,string v,int d,bool bidir=true){//to strings jinko connct karna aur d hogya unn dono strings ke beech ka wait 
    h[u].push_back({v,d});
    if(bidir) h[v].push_back({u,d}) 
    } //graph done ban gaaya 

    void print

};

int main(){

}