#include<iostream>
using namespace std;
///////////////////////////////////// ll method /////////////////////////////////////////////////////////////////
class node{
    public:
    int data;
    node* next;
    node(int d){
        data =d ;
        next=NULL;

    }

};
class Que{
    public:
    node*head,*tail;
    Que(){
        head=tail=NULL;
    }
    void push(int d){
        //insertion at end 
        if(head ==  NULL){
            head=tail=new node(d);
        }
        else{
            node* n=new node(d);
            tail->next=n;
            tail=n;
        }
    }
    int front(){
        return head->data;
    }
    void pop(){
        // deletion from front
        if(!head){
            return;
        }
        if(head->next == NULL){
            delete head;
            head=tail=NULL;
        }
        else{
            node* temp=head;
            head=head->next;
            delete temp;
        }
    }
    bool empty(){
        return head == NULL;
    }
};
int main(){
    Que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    while (!q.empty()){
        cout<<q.front()<<" ";
        q.pop();

    }
      
    
}
