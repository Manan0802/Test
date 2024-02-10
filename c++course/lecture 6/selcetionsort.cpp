#include<iostream>
using namespace std;

int main(){
    int n;
    int a[]={5,0,1,2,4};
    n=sizeof(a)/sizeof(int);
    for(int i=0;i<=n-2;i++){ //we assumed i=0 to be smaallesest  toh usko hide karke bakki ki dekhngee and thenn find smallest and tehn will swap with it then aoutrr min position will get updated by one after finding it uskke badd same porcess kara aur n-2 barr loop chaalega using same logic find smallest hide check uopdate swap
        int min=i;
        for(int j=i+1;j<n;j++){ 
            if(a[min]>a[j]){
                min=j;
            }
        }
        swap(a[min],a[i]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }

    return 0;
}