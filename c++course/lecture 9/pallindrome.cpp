#include<iostream>
#include<string.h>
using namespace std; 
bool ispalaindrome(char *a){
    int i=0;
    int j=strlen(a)-1;//strlen giives length of a 
    while(i<j){
        if(a[i] != a[j]){
            return false;
        }
        i++;
        j--;

    }
    return true;
}
int main(){
    //char a[]="madam";
    char a[]="Madam";
    if(ispalaindrome(a)){
        cout<<"plaindrome hai";
    }
    else{
        cout<<"plaindrome nhi hai";
    }
    return 0;
}




