#include<iostream>
#include<stack>
using namespace std;
 void push_bottom(stack<int> &s,int temp){
    //base case
    if(s.empty()){
        s.push(temp); // KHALI STACK MAI TOP ELEMNT KO PUSH KARIDAA 
        return;
    }
    //recursive case
    int ct=s.top();
    s.pop();
    push_bottom(s,temp);// REMAING STACK MAI RECURSION NE ADD KARDUIA 
    s.push(ct);
 }

 void reversestac(stack<int> &s){
    //base case
    if(s.empty()){
        return;
    }
    //recurvie
    int temp=s.top(); // YEH HUMNE TOP ELEMENT UTHAYA 
    s.pop();
    reversestac(s); // YEH HUMNE RECURSION KO BLDIA KI REMAINNG N-1 ELEMENTS KO REVERSE KARKE DEDE 
    push_bottom(s,temp);//ISNE TOP ELEMENT KO DALDIYA KE DUM BOOTOM MAI 
 }
 void printback(stack<int> s){
    while (!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    
    cout<<endl;
 }
 int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    printback(s);
    reversestac(s);
    printback(s);
 }