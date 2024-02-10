#include<iostream>
using namespace std;

int main() {
	int n,i,sum1,sum2,digit;
    cin>>n;
	sum1=0;
	sum2=0;
    i=1;

	
	while(n>0){
		digit=n%10;
		if(i%2!=0){

			sum1=sum1+digit;
		}
		else{
			sum2=sum2+digit;
		}
        i++;
		n=n/10 ;
		
	}
	    cout<<sum2<<'\n';
		cout<<sum1<<'\n';

	return 0;
}