#include<iostream>
#include<cstring>
using namespace std;
class car{
    public:
    char name[100];
    int price;
    int model;
    int seat;
    //1.default constructor:we create oject with help of constructor
    car(){
        cout<<"inside default constructor\n";
    }
    //parameterised constructor
    car(char n[],int p,int m,int s){
        strcpy(name,n);
        price=p;
        model=m;
        seat=s;

    }
    //3.copy constructor:ek object se duusre object bannne ke liye
    //car a=b;
    //car a(b);
    car(car &x){//copy wala is called by reference always 
        cout<<"inside copy constructor\n";
        strcpy(name,x.name);
        price=x.price;
        model=x.model;
        seat=x.seat; 
        
    }
    //copy assignment operator
    //a=b;//toupadtae the value of already created obeject a,with object b a baana hua hai 
    void operator=(car &x){
        cout<<"by copy assignment operator\n";
        strcpy(name,x.name);
        price=x.price;
        model=x.model;
        seat=x.seat;
    }

    void print(){
        cout<<name<<endl;
        cout<<price<<endl;
        cout<<model<<endl;
        cout<<seat<<endl;
    }
};

int main(){
    car a;//object of 
    strcpy(a.name,"bmw");
    a.price=10;
    a.model=2020;
    a.seat=4;
    // cout<<a.name<<endl;
    // cout<<a.price<<endl;
    // cout<<a.model<<endl;
    // cout<<a.seat<<endl;
    a.print();
    cout<<endl;
    car b;//object of 
    strcpy(b.name,"tata");
    b.price=20;
    b.model=2022;
    b.seat=5;
    b.print();

    //similarly we can create for a car b 
    //avoid repetion using function 
    car c("audi",400,2023,2);
    c.print();
    car d("aulto",4300,2023,2);
    car e("xyz",450,2022,4);
    car f(d);//f mai d copy karlia 
    f.print();
    e=a;//copy assignment operator 
    e.print();


    return 0;

}