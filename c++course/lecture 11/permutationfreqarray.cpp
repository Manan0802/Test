#include<iostream>
using namespace std;
int main(){
    char a[]="abffdefc";
    char b[]="cfffedba";
    int freq[26]={0};
    for(int i=0;a[i] != '\0';++i){
        int indx=a[i]-'a';
        freq[indx]++;
    }
    for(int i=0;b[i] != '\0';i++){
        int indx=b[i]-'a';
        freq[indx]--;
    }


    bool permutation=true;
   //agar done ko subtract karne ke badd 0 aate hai  sarre toh permutation warna permutation nhi h

   for(int i=0;i<26;i++)
   {
       if(freq[i] != 0){
        permutation =false;
       
       }
   }
   
        
    
    

    for(int i=0;i<26;i++){
        cout<<freq[i]<<" ";
    }
    cout<<"\n";
    for(char i='a';i<='z';i++){
        cout<<i<<" ";
    }
    cout<<'\n'; 
    if(permutation == true) {
    cout<<"permutation hai";
   }
   else{
    cout<<"permutation nhi hai";
   }
    return 0;
}