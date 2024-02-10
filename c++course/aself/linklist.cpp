#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d){
        data=d;
        next=NULL;

    }
    

};
void insertatfront(node* head,node* tail,int data){
        node* n=new node(data);
        if(!head){
            head=tail=new node(data);

        }
        else{
            n->next=head;
            head=n;
        }
    

    }
    void printll(node* p){
        while(p != NULL){
            cout<<p->data<<"->";
            p=p->next;
        }
    }
int main(){
    node *head, *tail;
    head=tail=NULL;
    insertatfront(head,tail,3);
    insertatfront(head,tail,2);
    insertatfront(head,tail,1);
    printll(head);


}