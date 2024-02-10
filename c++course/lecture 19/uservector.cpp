#include<iostream>
#include<vector>
using namespace std;
class Vector
{public:
    int *a;
    int cs;
    int ms;
    Vector(){}
    Vector(int n){
        a=new int[n];
        cs=0;
        ms=n;
    }
    void push_back(int element){
        if(cs==ms){
            int *olda=a;
            a=new int[2*ms];
            for(int i=0;i<cs;i++){
                a[i]=olda[i];
            }
            ms=ms*2;
            delete []olda;
        }
        a[cs]=element;
        cs++;
    }
    void pop_back(){
        if(cs>0){
            cs--;
        }
    }
    int size(){
        return cs;
    }
    int capacity(){
        return cs==0;
    }
    int& operator[](int index){
        return a[index];
    }
};
int main(){
    int n;
    cin>>n;
    Vector V(n);
    for(int i=0;i<n;i++){
        cin>>V[i];
    }
    for(int i=0;i<n;++i){
        cout<<V[i]<<" ";
    }
    cout<<endl;


}

    