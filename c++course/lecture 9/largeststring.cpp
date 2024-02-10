#include<iostream>
#include<string.h>
using namespace std;
void update(char *a,char *b){
    int len_b=strlen(b);
    int i=0;
    while(i<=len_b){
        a[i]=b[i];
        i++;
    }

}
int main(){
    char arr[100];
    int n;
    cin>>n;
    cin.get();
    char larg[100];
    int largestlen=0;
    for(int i=0;i<n;i++){
        cin.getline(arr,100);
        if(strlen(arr)>largestlen){
            largestlen= strlen(arr);
            update(larg,arr);
        }
        
        
        
    }
    cout<<larg;
    return 0;

}