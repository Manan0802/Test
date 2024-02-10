#include<iostream>
using namespace std;
//if we define something here then it would be global scope eg
// int x=1000;so it is global 

int main(){
    int x=10;
    if(x>0){
        int x=100;
        cout<<x<<'\n';
    }
    cout<<x;
    //scope resolution operator..> ::
    //purposee hoota hai ki it ignoores all scopw and directly goes to global scope
    return 0;
}