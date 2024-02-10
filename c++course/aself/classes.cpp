#include<iostream>
#include<cstring>
using namespace std;
class car{
    public:
    //char name[100];
    int seats;
    string name;
    int model;
    int price;
    //default constructor
    car(){

    }
    //parametrized
    car(char *n,int p,int m,int s){
        name=new char[strlen(n)+1];//array create of required size only 
        strcpy(name,n);
        price=p;
        model=m;
        seats=s;
    }
};
int main(){
    car a;
    strcpy(a.name,"bmw");
    a.price=100;
    a.model=2020;
    a.seats=4;
    cout<<a.price;
}
