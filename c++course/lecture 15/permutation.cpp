#include<iostream>
using namespace std;
void permutation(char a[],int i){
    //base case 
    if(a[i]=='\0'){
        cout<<a<<endl;
        return; 
    }
    // recursive rln
    for(int j=i;a[j]!='\0';j++){
        swap(a[i],a[j]);
        permutation(a,i+1);
        swap(a[j],a[i]);//backtracing(krta hua kam dobara karna) 
        }
    }
int main(){
    char a[]="abcd";
    permutation(a,0);
    // int i=0;
    // for(int j=i;a[j] != '\0';i++){
    //     cout<<a[j]<<endl;
    // }
    return 0;
}
