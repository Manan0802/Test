#include<iostream>
#include<list>//link list ke sarre inbuilt function use kar sakte hai 
using namespace std;
int  main(){
    //creating a link list 
    list<int>l;
    l.push_back(1);
    l.push_front(2);
    //so on

    // printing by for each loop se 
    for(auto x:l){//for every element e present inside list 
    cout<<x<<"->";
    ///reverse 
    l.reverse();
    // printing ka method 2 using iteratior 
    for(auto it=l.begin();it !=l.end();it++){ //l.begin hogaya phali node k adderes similar end hogyaa last walli ka 
        cout<<*it<<"->";
    }
    //refer cplusplus.com getting direct codess and understand 
} 
}

