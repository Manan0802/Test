#include <iostream>
using namespace std;

void subsequence(char in[],char op[],int i,int j){
    //base case 
    if(in[i]== '\0'){
        op[j] == '\0';
        cout<<op<<endl;
        return;
    }
    //recursive rln
    //ignore the ith char 
    subsequence(in,op,i+1,j);
    //prefix the ith char
    op[j]=in[i];
    subsequence(in,op,i+1,j+1);

}
int main(){
    char a[]="abc";
    char op[100];
    subsequence(a,op,0,0);
    return 0;
}