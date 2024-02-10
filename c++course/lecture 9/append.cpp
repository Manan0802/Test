#include<iostream>
#include<string.h>
using namespace std;
void appendstring(char *a,char *b){
    int i=strlen(a);
    int j=0;
    for(j=0;j<=strlen(b);j++){
        a[i]=b[j];
        i++;
    }
    
}
int main(){
    char a[100]="hello";
    char b[100]="world";
    appendstring(a,b);
    cout<<a<<endl;
    return 0;
}

