#include<iostream>
using namespace  std;
class car{
    public:
    void operator()(){
        cout<<"apne operator overloading kari hai --> ()\n";

    }

} ;
int main (){
    car A;
    A();// functiom calling + operator overloading -> functor;
    return 0;
    
    
}

