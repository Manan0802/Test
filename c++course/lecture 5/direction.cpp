#include<iostream>
using namespace std;
int main(){
    int x=0;
    int y=0;
    char ch;
    ch=cin.get();
    while (ch!= '\n'){ //to enter  complete string 
        if (ch =='N'){
            y++;
        }
        else if (ch =='S'){
            y--;
        }
        else if (ch =='E'){
            x++;
        }
        else{ x--;}
        ch=cin.get();//to get next character 
    }
    if(x>=0 && y>=0){
        for(int i=0;i<x;i++){
            cout<<"E";
            
        }
        for(int j=0;j<y;j++){
            cout<<"N";
        }
    }
    else if(x<=0 && y>=0){
        x=x*-1;
        for(int k=0;k<y;k++){
            cout<<"N";
        }
        for(int l=0;l<x;l++){
            cout<<"W";
    }
    }
    else if(x<=0 && y<=0){
        x=x*-1;
        y=y*-1;
        for(int m=0;m<y;m++){
            cout<<"S";
    }
    for(int n=0;n<x;n++){
            cout<<"W";
    }
    }
    else {
        y=y*-1;
        for(int v=0;v<x;v++){
            cout<<"E";
    }
    for(int c=0;c<y;c++){
            cout<<"S";
    }
    }
    
    return 0;
}