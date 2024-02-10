#include<iostream>
using namespace std;
template<typename U>
class node
{
public:
    int data;
    node *next;

    node(U d)
    {
        data = d;
        next = NULL;
    }
};

template<typename T>
class Stack{
public:
    node* head;
    Stack(){
        head = NULL;
    }

    void push(T d){
        // insertion at end 
        node* n = new node(d);
        n->next = head;
        head = n;
    }

    void pop(){
        //delete at front 
        if (!head)
        {
            return;
        }
        else
        {
            node *temp = head;
            head = head->next;
            delete temp;
        }
    }
    bool empty(){
        //head== null
        return head==NULL;
    }
    int top(){
        // top ka data 
        return head ->data;
    }

};
int main(){
    Stack<char> s;

	s.push('A');
	s.push('B');
	s.push('C');
	s.push('D');

	while (!s.empty()) {
		cout << s.top() << endl;

		s.pop();
	}


	return 0;
}
