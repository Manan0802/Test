#include<iostream>
using namespace std;

int main(){
    char ch;
    int cnt=0;
    cin>> ch;//since we know that cin does not take spaces  tab and enter to ger this resolved we replace cin by ch=cin.get();so now it will evaluate 
    while(ch!='$'){
        cnt++;
        cin>>ch;
    }
    cout<<cnt;
    return 0;
}