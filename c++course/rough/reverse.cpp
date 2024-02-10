#include<iostream>
#include<cstring>
using namespace std;
void reversestring(char *a){
    int n=strlen(a);
    int s=0;
    int e=n-1;
    while(s<e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
}
int main(){
    
    int i;
    char a[100];
    //char a[]="abcde";
	cin.getline(a,100,'\n');
    reversestring(a);
    cout<<a<<endl;
    return 0;
}