#include <iostream>
#include <cstring>
using namespace std;
class car
{
    // private://things which we want we cannot acces with help of claases usko private kardo

    // int price;
public:
    // char name[100];
    char *name;
    int price;
    int model;
    int seat;

    // 1.default constructor:we create oject with help of constructor(default way hai )
    car()
    {
        name = NULL;
        cout << "inside default constructor\n";
    }
    // parameterised constructor(parameters ko pass kardete hai )
    car(char *n, int p, int m, int s)
    {
        // char *n kardia kyu ki hume sirf required size buckets cahiye ab
        name = new char[strlen(n) + 1]; // length of string +1 for null
        strcpy(name, n);
        price = p;
        model = m;
        seat = s;
    }
    // 3.copy constructor:ek object se duusre object bannne ke liye
    // car a=b;
    // car a(b);
    car(car &x)
    { // copy wala is called by reference always
        cout << "inside copy constructor\n";
        name = new char[strlen(x.name) + 1];
        strcpy(name, x.name);
        price = x.price;
        model = x.model;
        seat = x.seat;
    }
    // copy assignment operator
    // a=b;//toupadtae the value of already created obeject a,with object b a baana hua hai
    // syntax of copy assignment operator
    //  returntype operator=(car &x)// we are updating it not creating it
    void operator=(car &x)
    {
        cout << "by copy assignment operator\n";
        strcpy(name, x.name);
        price = x.price;
        model = x.model;
        seat = x.seat;
    }
    // 5 operator overloading
    // a+=b
    // operator wala hee hai isme humne a ke andar b ki values ko add kardia
    void operator+=(car &x)
    {
        char *oldname = name;                               // avoiding memory leak
        name = new char[strlen(name) + strlen(x.name) + 1]; // adding both names
        strcpy(name, oldname);
        strcat(name, x.name);
        delete[] oldname;
        oldname = NULL;
        price += x.price;
        model += x.model;
        seat += x.seat;
    }

    void print()
    {
        cout << name << endl;
        cout << price << endl;
        cout << model << endl;
        cout << seat << endl;
    }
    void updatename(char *n)
    { // since if we called by default constructor then copy cant be done in null
      // thus this function is called to free memomry of a
        if (name != NULL)
        {
            delete[] name;
            name = NULL;
        }
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }
    // geeter
    int getprice()
    {
        return price;
    }
    // setter
    void setprice(int p)
    {
        price = p;
    }
    // agar humne private kardia say price ko toh hum usko class ke mai acces nhi kar skate
    // to usko change karmne ke liye humne functions banne padenge jaise idhar humne get price aure set price banaye hai
    // iska one more use is that we can put contraints on value
};

int main()
{
    car a; // object of
    // strcpy(a.name,"bmw");
    a.updatename("bmw");
    a.price = 10;
    a.model = 2020;
    a.seat = 4;
    // cout<<a.name<<endl;
    // cout<<a.price<<endl;
    // cout<<a.model<<endl;
    // cout<<a.seat<<endl;
    a.print();
    cout << endl;
    car b; // object of
    // strcpy(b.name,"tata");
    b.updatename("tata");
    b.price = 20;
    b.model = 2022;
    b.seat = 5;
    b.print();

    // similarly we can create for a car b
    // avoid repetion using function
    car c("audi", 400, 2023, 2);
    c.print();
    car d("aulto", 4300, 2023, 2);
    car e("xyz", 450, 2022, 4);
    car f(d); // f mai d copy karlia
    f.print();
    // e=a;//copy assignment operator
    // e.print();

    return 0;
}
