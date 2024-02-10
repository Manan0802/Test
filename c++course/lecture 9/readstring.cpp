#include<iostream>
using namespace std;
void printarray(char *a){
    for(int i=0;a[i]!='\0';++i){
        cout<<a[i]<<" ";
    }
}
void readstring(char *a,int max_size,char d_limiter='\n'){//d limiter is basically the word jaha tak print hoo
    char ch=cin.get();
    int i=0;
    while(ch !='\n' && i<max_size-1){//max sizee is  nesesaary to give and -1 is done too  leave one space for /0
        a[i]=ch;
        i++;
        ch=cin.get();
    }
    a[i]='\0';//thi neescarry to get output
}

int main(){
    int x;
    cin>>x;
    cin.get();
    char a[100];
    readstring(a,13,'.');//since max size is 4 so 3 letters will come 
   // printarray(a);
   cout<<"num :"<<x<<endl;
    cout<<"string :"<<a<<endl;
    return 0;
}