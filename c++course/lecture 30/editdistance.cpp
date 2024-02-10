//lcs wala 
#include<iostream>
#include<cstring>
using namespace std;
int editdisatance(char *s1,char *s2,int n,int m){
    //base case 
    if(n==0) return m;
    if(m==0) return n;
    //recursive case 
    if(s1[n-1]== s2[m-1]){
        return editdisatance(s1,s2,n-1,m-1);
    };
    else{
        return 1+{
            min(editdisatance(s1,s2,n,m-1),//addition
              min(editdisatance(s1,s2,n-1,m),//deletion in ith character from s1
            editdisatance(s1,s2,n-1,m-1)));//updation 
        };
    
}
};//error aa rhaa hai commas ka toh ek barr aaram se dekhlege 
//check lecture 36 for dp soln 
int main(){
    char s1[]="saturday";
    char s2[]="sunday";
    cout<<editdisatance(s1,s2,strlen(s1),strlen(s2))
}