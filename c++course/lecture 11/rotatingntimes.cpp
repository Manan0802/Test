#include<iostream>
#include<cstring>
using namespace std;
void rotatestring(char *a,int n){
    //shifting n times to get n buckets
    int len=strlen(a);
    int i=len;
    while(i>=0){
        a[i+n]=a[i];
        i--;
    }
    //bringing last n char
    i=0;
    int j=len;
    while(i<n){
        a[i]=a[j];

        i++;
        j++;

    }
    //addingg null chhar
    a[len]='\0';
}

int main(){
    //char a[]="hello";
    char a[50];
    cin.getline(a,50,'\n');
    int n;
    cin>>n;
    rotatestring(a,n);
   //cout<<a;
   for(int i=0;a[i] !='\0';i++){
    cout<<a[i];
   }
return 0;



}