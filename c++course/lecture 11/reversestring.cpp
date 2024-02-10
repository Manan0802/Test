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
    int n;
    cin>>n;
    int i;
    char a[n];
    //char a[]="abcde";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    a[i]='\0';
    cout<<a<<endl;
    reversestring(a);
    cout<<a<<endl;
    return 0;


    

}