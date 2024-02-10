#include<iostream>
using namespace std;
int main() {
	int n,i,j;
	cin>>n;
	for(i=2;i<=n;i++){
		bool i_isprime=true;
		for(j=2;j<i;j++){
			if(i%j==0){
				i_isprime=false;

			}

		}
		if(i_isprime){
			cout<<i<<'\n';
		}

	}
	return 0;
}