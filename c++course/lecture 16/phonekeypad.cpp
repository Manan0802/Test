#include<iostream>

using namespace std;
char keys[][10]={"","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};;
void keypad(char in[],char out[],int i,int j,int &cnt){
    //base case 
    if(in[i]== '\0'){
        out[j]='\0';
        cout<<out<<" ";

        return;
    }
    // recursive rln
    int ld=in[i]-'0';
    for(int k=0;keys[ld][k] != '\0';++k){
        out[j]=keys[ld][k];
        cnt++;
        keypad(in,out,i+1,j+1,cnt);
        
    }
}
int main(){
    char a[100];
    
    

    char out[1000];
    cin>>a;
    int cnt=0;
    keypad(a,out,0,0,cnt);
    cout<<cnt;
    return 0;
}