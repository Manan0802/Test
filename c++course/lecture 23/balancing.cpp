#include<iostream>
#include<stack>
using namespace std;

bool balance(char *a){
    stack<char>s;
    for(int  i=0;a[i] != '\0';++i){
        switch (a[i])
        {
        
            case '(':
            case '{':

            case '[':
            s.push(a[i]);
            break;
            case ')':
            if(!s.empty() and s.top()== '('){
                s.pop();
            }
            else{
                return false;
            }
            break;
        
    
        
        case ']':
            if(!s.empty() and s.top()== '['){
                s.pop();
            }
            else{
                return false;
            }
            break;
             case '}':
            if(!s.empty() and s.top()== '}'){
                s.pop();
            }
            else{
                return false;
            }
            break;
    }

}
if(s.empty()){
    return true;

}
else{
    return false;
}
//return true;
}
int main(){
    char a[]={"a+b*(c+d)+e*(f+g)"};
   if( balance(a)){
    cout<<"balanced"<<endl;
   }
   else{
    cout<<"not balanced"<<endl;
   }
   return 0;
   

}
