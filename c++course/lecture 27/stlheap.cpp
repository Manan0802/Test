#include<iostream>
#include<queue>
#include<functional>//greater
using namespace std;
class meracomparator
{
    public:
    bool operator()(int a,int b){
        return a<b;

    }
};

int main(){
    //heap==priority_queue
    //priority_queue<int>q;//maxheap
    //priority_queue<int>q,vector<int>,greater<int>q;//minheap
    //priority_queue<int>q,vector<int>,less<int>q;//maxheap
    priority_queue<int,vector<int>,meracomparator>q;//using comparator
    
    q.push(1);
    q.push(0);
    q.push(10);
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(5);
    while(!q.empty()){
        cout<<q.top()<<endl;
        q.pop();

    }
    return 0;
}