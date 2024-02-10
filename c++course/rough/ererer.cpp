#include<iostream>
using namespace std;
char keys[][10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void keypad(char in[],char out[],int i,int j){
    //base case 
    if(in[i]== '\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    // recursive rln
    int ld=in[i]-'0';
    for(int k=0;keys[ld][k] != '\0';++k){
        out[j]=keys[ld][k];
        keypad(in,out,i+1,j+1);
        
    }
}
int main(){
    string a;
	cin>>a
    char out[1000];
    keypad(a,out,0,0);
    return 0;
}